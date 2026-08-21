#include "main.h"



/**
*
*
*
*
*/
int conv_char(va_list args)
{
        char c;

        c = va_arg(args, int);
        _putchar(c);
        return (1);
}

/**
*
*
*
*
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
*
*
*
*
*
*/
int conv_perc(va_list args)
{
        (void)args;
        _putchar('%');
        return (1);
}

/**
*
*
*
*
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
*
*
*
*
*
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
