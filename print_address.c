#include "main.h"

/**
 * _print_address - function to print address
 * @valist: variable arguments
 *
 * Return: count
 */
int _print_address(va_list valist)
{
	char *str;
	int count = 0;
	unsigned long int addr = va_arg(valist, unsigned long int);

	if (!addr)
	{
		_puts("(nil)");
	}

	_putchar('0');
	_putchar('x');
	count = 2;
	str = convert(addr, 16, 1);
	count = count + _puts(str);

	return (count);
}
