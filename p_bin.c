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
	int bits[32];
	int i = 0, printed = 0, j;
	unsigned int n = va_arg(*args, unsigned int);

	while (n > 0)
	{
		bits[i] = n % 2;
		n /= 2;
		i++;
	}



	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + bits[j]);
		printed++;
	}

	return (printed);
}
