#include <stdio.h>
#include "main.h"

int main(void)
{
_printf("1. Let's try to printf a simple sentence.\n");
_printf("2. %c\n", 'S');
_printf("3. A char inside a sentence: %c. Did it work?\n", 'F');
_printf("4. Let's see if the cast is correctly done: %c. Did it work?\n", 48);
_printf("5. %%");
_printf("7. Should print a single percent sign: %%\n");
_printf("8. %s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
_printf("9. css%ccs%scscscs", 'T', "Test");
_putchar('\n');
_printf(NULL);
printf(NULL);
_printf("%c", '\0');
printf("%c", '\0');

_printf("%");
printf("%");

_printf("%K\n");
printf("%K\n");
printf("%");






	return (0);
}