#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
#include"main.h"
/**
 * 
 * _putcahr - print char
 * 
 * @c: the char what we wnna to print it 
 * Return: no return void
*/

void _putchar(char c)
{

	write(1,&c,1);

}

/**
 * 
 * _printf - print any think like the printf function in c
 * 
 * @format: the string which will be printed and it will depend of it the what the
 * type of the argumint will be printed 
 *   
 * Return: (int value)num of char that printed
*/
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list


	return (counter);
}
