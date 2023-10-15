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
	long int n = va_arg(arg, int);
	int input = 0, count = 0, x;
	char tmp[30];

	if (n < 0)
	{
		list('-');
		n = n * -1;
		input++;
	}
	if (n == 0)
		list[count--] = '0';
	while (n > 0)
	{
		tmp[count++] = ((n % 10) + '0');
		n = n / 10;
		input++;
	}
	x = count--;
	while (x >= 0)
	{
		list(tmp[x]);
		x--;
	}
	return (input);
}
