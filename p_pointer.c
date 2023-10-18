#include"main.h"
/**
 * p_pointer - print pointer
 *
 * @args: input
 *
 * Return: add
 */

int p_pointer(va_list *args)
{
	void *pointer;
	char *str = "(null)";
	long int t;
	int x = 0;

	pointer = va_arg(*args, void *);
	if (pointer == NULL)
	{
		while (!str[x])
		{
			_putchar(str[x]);
			x++;
		}
		return (x);
	}
	t = (unsigned long int)pointer;
	_putchar('0');
	_putchar('x');
	return (p_Hex(t));
}

/**
 * p_Hex - print hexadecimal
 *
 * @num: input
 *
 * Return: hex number
 */
int p_Hex(unsigned long int num)
{
	char hexChars[] = "0123456789ABCDEF";
	char hexBuffer[BUFFER_SIZE];
	int count = 0, i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hexBuffer[count] = hexChars[num % 16];
		num /= 16;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(hexBuffer[i]);
	}
	return (count);
}

/**
 * p_hex - print hexadecimal
 *
 * @args: input
 *
 * Return: hex number
 */
int p_hex(va_list *args)
{
	unsigned long int num = va_arg(*args, unsigned long int);
	char hexChars[] = "0123456789abcdef";
	char hexBuffer[BUFFER_SIZE];
	int count = 0, i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hexBuffer[count] = hexChars[num % 16];
		num /= 16;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(hexBuffer[i]);
	}
	return (count);
}

/**
 * p_Hex_v - print hexadecimal
 *
 * @args: input
 *
 * Return: hex number
 */
int p_Hex_v(va_list *args)
{
	unsigned long int num = va_arg(*args, unsigned long int);
	char hexChars[] = "0123456789ABCDEF";
	char hexBuffer[BUFFER_SIZE];
	int count = 0, i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		hexBuffer[count] = hexChars[num % 16];
		num /= 16;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(hexBuffer[i]);
	}
	return (count);
}
