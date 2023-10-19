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

	if (num > 1)
	{
		p_bin(args);
	}
	_putchar('0' + num % 2);
	return (0);
}
