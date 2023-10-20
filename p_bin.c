#include"main.h"

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

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		counter++;
	}
	else
		num = n;
	if (num != 0)
	{
		if ((num / 2) != 0)
			counter += print_num(num / 2);

		_putchar('0' + (num % 2));
		counter++;
	}

	return (counter);
}
