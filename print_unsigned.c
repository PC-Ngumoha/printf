#include "main.h"

/**
 * _ print_binary - function to print unsigned integers
 * @valist: valist parameter
 *
 * Return: Always 0
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);

	print_unsigned(num);
	return(0);
}

/**
 * print_nusigned
 * @i: integer parameter
 *
 * Return: Always 0
 */
void print_unsigned(int i)
{
	int j;
	j = i % 2;

	if (i / 2 && i > 0)
	{
		print_unsigned(i / 2);
		_putchar(j + '0');
	}
	if (i < 0)
	{
		_putchar('-');
		_putchar(j + '0');
	}
}
