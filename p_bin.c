#include"main.h"
/**
 * print_bin - print binery
 *
 * @n: number
 *
 * Return: count
 */
int print_bin(unsigned int n)
{
	int counter = 0;

	if (n != 0)
	{
		if ((n / 2) != 0)
			counter += print_num(n / 2);

		_putchar('0' + (n % 2));
		counter++;
	}

	return (counter);
}
/**
 * p_bin - convert decimal to binary
 *
 * @args: input
 *
 * Return: bin_num
 */
int p_bin(va_list *args)
{
	int n = va_arg(*args, int);
	int counter = 0;
	unsigned int num;

	if (n < 0)
	{
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num > 0)
	{
		if ((num / 2) != 0)
			counter += print_bin(num / 2);

		_putchar('0' + (num % 2));
		counter++;
	}

	return (counter);

}
