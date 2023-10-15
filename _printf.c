#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _putchar - print char
 *
 * @c: the char what we wnna to print it
 * Return: no return void
*/

void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _printf - print any think like the printf function in c
 *
 * @format: the string which will be printed
 * and it will depend of it the what the
 * type of the argumint will be printed
 *
 * Return: (int value)num of char that printed
*/
int _printf(const char *format, ...)
{
	int counter = 0, itreator = 0;
	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while (*(format + itreator) != '\0')
		{
			if (*(format + itreator) == '%')
			{
				itreator++;
				if (*(format + itreator) == '%')
				{
					_putchar('%');
				}
				else if (*(format + itreator) == 'c')
				{
					_putchar(va_arg(args, int));
				}
				else if (*(format + itreator) == 's')
				{
					  counter += print_string(va_arg(args, char *));
					  counter--;
				}
				else
				{
					_putchar('%');
				}
				counter++;
			}
			else
			{
				_putchar(*(format + itreator));
				counter++;
			}
			itreator++;
		}
	}
	va_end(args);
	return (counter);
}
/**
 * print_string - function print string
 * @string: string that will printed
 * Return: num of the cahr that printed
*/

int print_string(char *string)
{
	int counter = 0;
	int itrator = 0;

	if (string != NULL)
	{
		while (*(string + itrator) != '\0')
		{
			_putchar(*(string + itrator));
			counter++;
			itrator++;
		}
	}
	return (counter);
}
