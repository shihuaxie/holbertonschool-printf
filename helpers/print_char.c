#include "main.h"
#include <stdio.h>
/**
 * print_char - print a char
 * @args: pointer to arguments
 * Return: printed char
 */
int print_char(va_list *args)
{
	char c = va_arg(*args, int);

	_putchar(c);
return (1);
}
