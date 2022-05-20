#include "main.h"

/**
 * _print_binary - function to print unsigned integers
 * @valist: valist parameter
 *
 * Return: Always 0
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;
	int base = 2;

	str = convert(num, base);
	return (_puts(str));
}
