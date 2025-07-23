#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *  _printf - Function produces output according to a format
 * @format: The format string containing the characters
 * Return: Number of characters printed, (excluding the null byte)
 */
int _printf(const char *format, ...)
{
        va_list args;   /* access the variable arguments */
        int i = 0;
        int count = 0;

        if (format == NULL)
                return (-1);

        va_start(args, format);

        while (format[i])
        {
                if (format[i] == '%')
                {
                        i++; /* move to the next charactor*/
                        if (!format[i])
                                return (-1);

                        /* find out which spicifer is matched */
                        if (format[i] == 'c')
                                count =  count + print_char(&args); /* print a charactor */
                        else if (format[i] == 's')
                                count = count  + print_string(&args); /* print a string */
                        else if (format[i] == 'd' || format[i] == 'i')
                                count = count + print_numbers(&args); /* print an integer */
                        else if (format[i] == '%')
                                count = count + print_percent(&args); /*print a % symbol */
                        else
                        {
                        /* Unknown specifier: print as literal characters */
                                count += _putchar('%');
                                count += _putchar(format[i]);
                        }
                }
                else
                {
                        /* Normal character: print it directly */
                        count += _putchar(format[i]);
                }
                i++; /* Move to the next character in the format string */
        }
        va_end(args);
        return (count);
}
