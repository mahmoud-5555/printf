#include"main.h"

/**
 * p_bin - convert decimal to binary
 *
 * @dnum: input
 *
 * Return: bin_num
*/
int p_bin(int dnum)
{
	unsigned int x = 1 << 31;
	int count = 0, i, bit;
	char z;

	for (i = 0; i < 32; i++)
	{
		bit = (dnum & x) ? 1 : 0;
		z = '0' + bit;
		write(1, &z, 1);
		dnum <<= 1;
		count++;
	}
	return (count);
}

