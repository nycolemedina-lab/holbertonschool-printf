#include "main.h"

/**
* _printf - function produces output acording to a format
* @format: a string of charecter including the format specifires
*
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	int i = 0, j, matched;
	int count = 0;
	va_list args;

	spec_t funcs[] = {
		{"c", conv_char},
		{"s", conv_string},
		{"%", conv_perc},
		{"d", conv_int},
		{"i", conv_int},
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
