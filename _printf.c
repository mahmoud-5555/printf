#include"main.h"
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - print char
 *
 * @c: the char what we wnna to print it
 * Return: 1 mean the num of the char that printed
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _putchar_v - print char that thaked from the argumants list
 *
 * @args: the pinter to  the argumants list that will be the input takied
 * Return: 1 mean the num of the char that printed
*/
int _putchar_v(va_list *args)
{
	int c = va_arg(*args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * _printf - print any think like the printf function in c
 *
 * @form: the string which will be printed
 * and it will depend of it the what the
 * type of the argumint will be printed
 *
 * Return: (int value)num of char that printed
*/

int _printf(const char *form, ...)
{
	int counter = 0, itrator = 0, i;
	va_list args;
	match formla[] = {{'c', _putchar_v}, {'s', print_string}, {'d', print_num_v},
	{'i', print_num_v}};

	va_start(args, form);
	if (form == NULL || (form[0] == '0' && (form[1] == '\0' || form[1] == ' ')))
		return (-1);
	while (form[itrator] != '\0')
	{
		if (form[itrator] == '%')
		{
			itrator++;
			for (i = 0; i < 4; i++)
			{
				if (formla[i].spf == form[itrator])
				{
					counter += formla[i].f(&args);
					break;
				}
				else if (form[itrator] == '%')
				{
					_putchar('%');
					counter++;
					break;
				}
			}
		}
		else
		{
			_putchar(form[itrator]);
			counter++;
		}
		itrator++;
	}
	va_end(args);
	return (counter);
}
