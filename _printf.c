#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
#include"main.h"
#include <stdio.h>
#include <math.h>
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
 * 
 * buffer - print contents
 * 
 * @list: input arry 
 * @b: add next char
 * Return: no return void
*/

void p_buffer(char list[], int *b)
{
	if (b > 0)
		write(1,&list[0],*b);
	*b = 0;

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
	int counter = 0;
	char list[BUFFER_SIZE];
	int counter = 0, itreator = 0;
	int *ordar;
	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while ((*format + itreator) != '\0')
		{
			if ((*format + itreator) == '%')
			{
				itreator++;
				if (format == '%')
				{
					putchar('%');
				}
				else if (format == 'c')
				{
					_putchar(va_arg(args, char));
				}
				else if (format == 's')
				{
					print_string(va_arg(args, char));
				}
				else
				{
					_putchar('%')
				}
				itreator++;
			}
			else
			{
				_putchar(*format + itreator);
				counter++;
			}
			itreator++;
		}
	}
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
			_putcahr(*(string + itrator));
			counter++;
			itrator++;
		}
	}
	return (counter);
}
