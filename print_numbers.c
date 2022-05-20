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
	int count = count_digits(num);

	print_number(num);
	return (count);
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

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n % 10;

	if (n / 10)
		print_number(n / 10);
	_putchar('0' + temp);
}


/**
 * count_digits - counts the number of digits in a number
 * @n: integer parameter
 *
 * Return: number of digits
 */
int count_digits(int n)
{
	static int count;

	n = n / 10;
	count++;
	if (n)
	{
		count_digits(n);
	}
	return (count);
}

