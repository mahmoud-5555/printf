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
	unsigned int  mostSbit = 2147483648, itrator, sumbin;
	unsigned int bin[32];
	int count;
	char *n = va_arg(*args, char *);

	bin[0] = *n / mostSbit;


	for (itrator = 0; itrator < 31; itrator++)

	{

		mostSbit /= 2;

		bin[itrator] = (*n / mostSbit) % 2;

	}

	for (itrator = 0, sumbin = 0, count = 0; itrator < 32; itrator++)

	{

		sumbin += bin[itrator];

		if (sumbin || itrator == 31)

		{

			char x = '0' + bin[itrator];

			write(1, &x, 1);

			count++;

		}

	}

	return (count);
}
