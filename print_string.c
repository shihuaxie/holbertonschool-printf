#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - prints  a string
 * @args: a list of string
 *
 * Return: printed string
 */
int print_string(va_list *args)
{
	char *str = va_arg(*args, char *);
	int i = 0;
	int count = 0;

	if (!str)
		return (0);

	while (str[i])
	{
		count = count + _putchar(str[i]);
		i++;
	}

	return (count);
}
