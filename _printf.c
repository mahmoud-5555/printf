#include"main.h"
#include <stdio.h>
#include <stdarg.h>

void _putchar(char c) {
    putchar(c);
}

int print_string(const char *str) {
    int count = 0;
    while (str && *str) {
        _putchar(*str);
        str++;
        count++;
    }
    return count;
}

int print_number(int n) {
    int count = 0;
    if (n < 0) {
        _putchar('-');
        count++;
        n = -n;
    }
    if (n >= 10) {
        count += print_number(n / 10);
    }
    _putchar('0' + n % 10);
    count++;
    return count;
}

int _printf(const char *format, ...) {
    int counter = 0;
    va_list args;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    _putchar(c);
                    counter++;
                    break;
                }
                case 's': {
                    const char *str = va_arg(args, const char *);
                    counter += print_string(str);
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    counter += print_number(num);
                    break;
                }
		case 'b': {
				  int dnum = va_arg(args, int);
				  counter += p_bin(dnum);
				  break;
			  }
                case '%':
                    _putchar('%');
                    counter++;
                    break;
                default:
                    _putchar('%');
                    _putchar(*format);
                    counter += 2;
                    break;
            }
        } else {
            _putchar(*format);
            counter++;
        }
        format++;
    }

    va_end(args);
    return counter;
}
