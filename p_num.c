#include "main.h"

/**
 * print_num_v - print number from argumants_list
 * @args:the pointer to argumint list (pass by refrance)
 * Return:num of char that function print it
*/
int print_num_v(va_list *args)
{
	int n = va_arg(*args, int);
	int counter = 0;
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num != 0)
	{
		if ((num / 10) != 0)
			counter += print_num(num / 10);

		_putchar('0' + (num % 10));
		counter++;
	}

	return (counter);
}

/**
 * print_num - print number from n
 * @n:the number that will be printed
 * Return:num of char that function print it
*/
int print_num(int n)
{
	int counter = 0;
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num != 0)
	{
		if ((num / 10) != 0)
			counter += print_num(num / 10);

		_putchar('0' + (num % 10));
		counter++;
	}

	return (counter);
}

