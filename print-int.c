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
	char tmp;

	if (n < 0)
	{
		buffer[count++] = '-';
		n = -n;
	}
	while (n > 0)
	{
		buffer[count++] = (char)((n % 10) + '0');
		n = n / 10;
	}
	if (count == 0)
	{
		buffer[count++] = '0';
	}
	y = count - 1;
	while (x < y)
	{
		tmp = buffer[x];
		buffer[x] = buffer[y];
		buffer[y] = tmp;
		x++;
		y--;
	}
	write(1, buffer, count);
	write(1, "\n", 1);
	return (count);
}

