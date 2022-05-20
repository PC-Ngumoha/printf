#include "main.h"

/**
 * _print_binary - function to print unsigned integers
 * @valist: va_list parameter
 *
 * Return: length of number
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 2, 1);
	return (_puts(str));
}

/**
 * _print_hexa_upper - prints numbers in uppercase hexadecimal format
 * @valist: va_list parameter
 *
 * Return: length of number
 */
int _print_hexa_upper(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 16, 0);
	return (_puts(str));
}

/**
 * _print_hexa_lower - prints numbers in lowercase hexadecimal format
 * @valist: va_list parameter
 *
 * Return: length of number
 */
int _print_hexa_lower(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 16, 1);
	return (_puts(str));
}
