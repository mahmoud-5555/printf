#include "main.h"

/**
 * print_string - function that print string from input argumants list
 * @args: pointer to argumants list(pass by refrance)
 * Return: the number of the char that function print it
*/
int print_string(va_list *args)
{
	char *string = va_arg(*args, char *);
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
	else
	{
		string = "(null)";
		counter++;
	}
	return (counter);
}
