#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * format - struct (new data type using to handel cases)
 * @spf: is the specifaier to the var
 * @f: pointer to the function that take va_list type as prameter
 *
*/
typedef struct format
{
    char spf;
    int (*f)(va_list *);
} match;

int printint(va_list args);
int _printf(const char *format, ...);
int print_num_v(va_list *args);
int print_num(int n);
int p_bin(va_list *args);
int _putchar_v(va_list *args);
int _putchar(char c);
int print_string(va_list *args);

/* The declareing of all function*/

#endif
