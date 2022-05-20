#include "main.h"

/**
 * _print_binary - function to print base two numbers
 * @valist: valist parameter
 *
 * Return: str array
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;
	int base = 2;

	str = convert(num, base);
	return (_puts(str));
}

/**
 * _print_octal - function to print octal numbers
 * @valist: valist parameter
 *
 * Return: str array
 */
int _print_octal(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int)
	char *str;
	int base = 8;

	ptr = convert(num, base);
	return (_puts(str));
}

/**
 * _print_unsigned
 * @valist: valist parameter
 *
 * Return: str array
 */
int _print_unsigned(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int)
	char *str;
	int base = 10;

	str = convert(num, base);
	return (_puts(str));
}
