#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<unistd.h>

#define BUFFER_SIZE 1024 

int _printf(const char *format, ...);
int printint(va_list args);
void _putchar(char);
void p_buffer(char list[], int *b);
int *_handl_theformat(char *);
/* The declareing of all function*/

#endif
