#include "main.h"

/**
* conv_char - prints a character
* @args: va_list containig character to print
*/
int conv_char(va_list args)
{
        char c;

        c = va_arg(args, int);
        _putchar(c);
        return (1);
}

/**
* conv_string - prints a string
* @args: va_list containig string to print
*/
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

/**
* conv_perc - prints a '%' character
* @args: va_list contanig '%'
*/
int conv_perc(va_list args)
{
        (void)args;
        _putchar('%');
        return (1);
}

/**
* print_num - prints a number in base 10
* @args: va_list contaning the numbers to print
*/
int print_num(unsigned int n)
{
        int count = 0;

        if (n / 10)
                count += print_num(n / 10);
        _putchar((n % 10) + '0');
        return (count + 1);
}

/**
* conv_int - prints an integer
* @args: va_list containing numbers to print
*/
int conv_int(va_list args)
{
        int n = va_arg(args, int);
        int count = 0;
        unsigned int num;

        if (n < 0)
        {
                _putchar('-');
                count++;
                num = -n;
        }
        else
        {
                num = n;
        }
        count += print_num(num);
        return (count);
}
