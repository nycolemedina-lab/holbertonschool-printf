#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
* struct specifier - structure to map format specifiers to printer functions
* @spec: format specifier character ('c', 's', 'd',
* @f: function pointer to print that type
*/
typedef struct specifier
{
	char *spec;
	int (*f)(va_list);
} spec_t;


int _printf(const char *format, ...);

int _putchar(char c);

int conv_char(va_list args);
int conv_string(va_list args);
int conv_perc(va_list args);

#endif
