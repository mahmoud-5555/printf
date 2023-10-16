#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include<stdarg.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int printint(va_list args);
int p_bin(int dnum);
void _putchar(char);
int print_string(char *);

/* The declareing of all function*/

#endif
