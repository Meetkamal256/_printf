#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf- prints a string in a formatted way.
 * @format: string to print (char *)
 * @...: variadic arguments (unknown)
 *
 * return number of characters printed.
 */

int _printf(const char *format, ...)
{
    int i = 0;
    int count = 0;
    int value = 0;
    va_list args;
    va_start(args, format);
    int (*f)(va_list);
    /*parsing a Null pointer*/
    if (format == NULL)
        return (-1);

    /*print each string character*/
    while (format[i] != '\0')
    {
        if (format[i] != '%')
        {
            value = write(1, &format[i], 1);
            count = count + value;
            i++;
        }
        if (format[i] == '%')
        {
             f = check_specifier(&format[i + 1]); /*check_specifier function returns a function pointer
             (*f)(va_list) which is captured with the variable f*/       
            if (f!= NULL)
            {
                value = f(args);
                count = count + value;
                i = i + 2;
                continue;
                if (format[i + 1] == '\0')
                {
                    break;
                }
                if (format[i + 1] != '\0')
                {
                    value = write(1, &format[i], 1);
                    count = count + value;
                    i = i + 2;
                    continue;
                }
            }

        }
    }
    return (count);
}
 
