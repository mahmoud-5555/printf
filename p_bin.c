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
	unsigned int n = va_arg(*args, unsigned int);
	unsigned int bno = 0;
	unsigned int remainder, f = 1;

	while (n != 0)
	{
		remainder = n % 2;
		bno = bno + remainder * f;
		f = f * 10;
		n = n / 2;
	}

	return (bno);
}
