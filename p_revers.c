#include"main.h"
/**
 * p_reverse - print reverse
 *
 * @args: input
 *
 * Return: revers
*/

int p_reverse(va_list args)
{
	char *string;
	int x = 0, count = 0;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		string = "(Null)";
	}
	while (string[x])
		x++;
	for (x = x - 1; x >= 0; x--)
	{
		_putchar(string[x]);
		count++;
	}
	return (count);
}
