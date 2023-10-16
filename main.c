#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;
	_printf("hallo\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	len = _printf("%c test_char\n",'A');
	len = _printf("%s","hallo");
	_printf("%c is char , %s is string  and we can out string %s and %c\n",'a',"word"," word2", 'b');
	
	_printf("%i\n", len);
	len = printf("Let's try to printf a simple sentence.\n");
	_printf("%i\n", len);
	_printf("%c is char , %s is string  and we can out string %s and %c\n",'a',"word"," word2", 'b');
	_printf("%i\n", len);
	len = printf("%c test_char\n",'A');
	_printf("%i\n", len);
	_printf("%c is char , %s is string  and we can out string %s and %c\n",'a',"word"," word2", 'b');
	len = _printf("%c is char , %s is string  and we can out string %s and\n %c",'a',"word"," word2", 'b');
	printf("%i\n",len);
	len = _printf("%c is char , %s is string  and we can out string %s and %c\n",'a',"word"," word2", 'b');
	_printf("%i \n",len);
	printf("%i \n",len);
	




	return (0);
}