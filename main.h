#ifndef MAIN_H
#define MAIN_H


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


#endif
