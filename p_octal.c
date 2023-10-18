#include"main.h"

/**
 * p_octal - print octal
 *
 * @args: input
 *
 * Return: number
*/

int p_octal(va_list *args)
{
	int x = 0, number = 0;
	int *list;
	unsigned int n = va_arg(*args, unsigned int);
	unsigned int tmp = n;

	while (tmp > 0)
	{
		n /= 8;
		number++;
	}
	number++;
	list = malloc(sizeof(int) * number);

	if (!list)
		return (-1);
	while (x < number)
	{
		list[x] = tmp % 8;
		tmp /= 8;
		x++;
	}
	x = number - 1;
	while (x >= 0)
	{
		_putchar(list[x] + 48);
		x--;
	}
	free(list);
	return (number);
}
