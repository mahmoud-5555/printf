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
	unsigned int num = va_arg(*args, unsigned int);
	int counter = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num != 0)
	{
		if ((num / 2) != 0)
			counter += p_bin(num / 2);

		_putchar('0' + (num % 2));
		counter++;
	}

	return (counter);
}
