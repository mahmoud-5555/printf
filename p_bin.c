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
	int gg = 0, printed = 0, x = 0, t = 1, e;
	unsigned int n = va_arg(*args, unsigned int);
	unsigned int q;

	while (x < 32)
	{
		q = ((t << (32 - x)) & n);
		if (q >> (31 - x))
			gg = 1;
		if (gg)
		{
			e = q >> (31 - x);
			_putchar(e + '0');
			printed++;
		}
		x++;
	}
	if (printed == 0)
	{
		printed++;
		_putchar('0');
	}
	return (printed);
}
