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
	int bin_num = 0, remain, x = 1;

	if (dnum < 0)
		exit(98);
	while (dnum != 0)
	{
		remain = dnum % 2;
		bin_num += remain * x;
		x *= 10;
		dnum /= 2;
	}
	return (bin_num);
}

