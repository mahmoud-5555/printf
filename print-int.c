#include"main.h"
/**
 * printint - print integer
 *
 * @arg: input argument
 *
 * Return: number
*/
int printint(va_list arg)
{
	int n = va_arg(arg, int);
	int input = 0, count;
	char tmp[30];

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		input++;
	}
	while (n > 0)
	{
		tmp[count + 1] = (n % 10) + 48);
		n = n / 10;
		input++;
	}
	_putchar(n);
	return (input);
}
