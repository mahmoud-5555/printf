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
	unsigned int x = 1 << 31;
	int i, bit, started = 0, dnum = va_arg(*args, int);

	for (i = 0; i < 32; i++)
	{
		bit = (dnum & x) ? 1 : 0;
		if (bit || started)
		{
			_putchar('0' + bit);
			started = 1;
		}
		dnum <<= 1;
	}
	return (0);
}

