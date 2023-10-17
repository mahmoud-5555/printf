#include "main.h"
int len(char *string);

/**
 * print_string - function that print string from input argumants list
 * @args: pointer to argumants list(pass by refrance)
 * Return: the number of the char that function print it
*/
int print_string(va_list *args)
{
	char *string = va_arg(*args, char *);
	int itrator = 0, l;

	if (string == NULL)
	{
		string = "(NULL)";
		l = len(string);
		while (itrator < l)
		{
			_putchar(string[itrator]);
			itrator++;
		}
		return (l);
	}
	else
	{
		l = len(string);
		while (itrator < l)
		{
			_putchar(string[itrator]);
			itrator++;
		}
		return (l);
	}

}
/**
 * len - string length
 *
 * @string: input
 *
 * Return: len
*/
int len(char *string)
{
	int itrator = 0;

	while (!string[itrator])
		itrator++;
	return (itrator);
}
