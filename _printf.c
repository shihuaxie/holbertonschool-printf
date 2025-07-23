#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * int _printf - Function produces output according to a format
 * supporting format specifiers: %c, %s, %d, %i, and %%.
 *
 * @format: The format string containing the characters
 * and the optional format specifiers.
 *
 * Return: Number of characters printed, (excluding the null byte)
 * or -1 if an error occurs
 *
 */

int _printf(const char *format, ...)
{
	/* access the variable arguments */
	va_list args;
	int i = 0;
	int count = 0;

	/* Return -1 if format string is NULL */	
	if (format == NULL)
		return (-1);

	va_start(args, format);

	/* while Loop through each character in the format string */
	while (format[i])
	{
	
	
	
	
	}

}
