#include "main.h"
/**
* _printf - function produces output acording to a format
* @format: a string of charecter including the format specifires
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*f)(va_list);
	va_list args;

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
			f = match_func(format[i]);
			if (f != NULL)
			{
				count += f(args);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
