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
	unsigned int n, mSb, x, sumbin;
	unsigned int bin[32];
	int count;

	n = va_arg(*args, unsigned int);
	mSb = 2147483648;
	bin[0] = n / mSb;

	for (x = 1; x < 32; x++)
	{
		mSb /= 2;
		bin[x] = (n / mSb) % 2;
	}

	for (x = 0, sumbin = 0, count = 0; x < 32; x++)
	{
		sumbin += bin[x];
		if (sumbin || x == 31)
		{
			char y = '0' + bin[x];

			write(1, &y, 1);
			count++;
		}
	}

	return (count);
}
