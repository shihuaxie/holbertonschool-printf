#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print number
 * @args: argument to print
 * Return: number of characters printed
 */
int print_numbers(va_list *args)
{
	int n = va_arg(*args, int);
	int count = 0;
	unsigned int num;
	int div = 1;

	if (n < 0)
	{
		count = count + _putchar('-');
		num = (unsigned int)-n;
	}
	else
	{
		num = (unsigned int)n;
	}

	while (num / div >= 10)
	{
		div = div * 10;
	}
	while (div)
	{
		count += _putchar(num / div + '0');
		num = num % div;
		div = div / 10;
	}
return (count);
}
