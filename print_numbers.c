#include "main.h"

/**
 * _print_dec - prints decimal numbers to the screen
 * @valist: variable list of arguments
 *
 * Return: Always (0);
 */
int _print_dec(va_list valist)
{
	int num = va_arg(valist, int);

	print_number(num);
	return (0);
}


/**
 * print_number - helps other functions print numbers to the screen
 * @n: integer parameter
 *
 * Return: void
 */
void print_number(int n)
{
	int temp;

	temp = n % 10;

	if (n / 10)
		print_number(n / 10);
	_putchar('0' + temp);
}
