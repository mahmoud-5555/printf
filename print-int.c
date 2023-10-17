#include"main.h"

/**
 * printint - print integer
 *
 * @args: input argument
 *
 * Return: number
*/
int printint(va_list args)
{
	long int n = va_arg(args, long int);
	char buffer[BUFFER_SIZE];
	int count = 0, x = 0, y;
	char tmp[30];

	if (n < 0)
	{
		buffer[count++] = '-';
		n = -n;
	}
	do {
		tmp[x++] = (n % 10) + '0';
		n = n / 10;
		count++;
	} while (n != 0);

	if (count == 0)
	{
		buffer[count++] = '0';
	}

	y = x - 1;

	while (y >= 0)
	{
		buffer[count++] = tmp[y];
		y--;
	}
	write(1, buffer, count);
	write(1, "\n", 1);
	return (count);
}

