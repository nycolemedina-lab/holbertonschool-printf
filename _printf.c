#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int conv_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}

int conv_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

int conv_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}


int _printf(const char *format, ...)
{
	int i = 0, j, matched;
	int count = 0;
	va_list args;

	spec_t funcs[] = {
		{"c", conv_char},
		{"s", conv_string},
		{"%", conv_perc},
		{NULL, NULL}
	};


	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;


			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			j = 0;
			matched = 0;

			while (funcs[j].spec != NULL)
			{
				if (format[i] == funcs[j].spec[0])
				{
					count += funcs[j].f(args);
					matched = 1;
					break;
				}
				j++;
			}
			if (!matched)
			{
				_putchar('%');
				_putchar(format[i]);
				count +=2;
			}

		}
		i++;
	}

	va_end(args);
	return (count);
}
