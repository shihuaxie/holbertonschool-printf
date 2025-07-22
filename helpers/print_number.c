// #include "main.h" //
#include <stdio.h>
#include <limits.h>
/**
 * print_number - print number
 * @args: argument to print
 * Return: number
 */
int print_numbers(va_list *args)
{
	// int n = va_arg(args, int);//
	int sign = 0;
	int n;
	int num;

	if (n < 0)
	{
		sign = sign + putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	putchar((n % 10) + '0');

printf("%d\n", num);
}
