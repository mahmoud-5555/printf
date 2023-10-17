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
	int bit, i, count = 0;
	unsigned int num = va_arg(*args, unsigned int);

	for (i = 31; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (bit || count > 0)
		{
			_putchar(bit + '0');
			count++;
		}
	}
	if (count == 0)
	{
		_putchar('0');
		count++;
	}
	return (count);
}
