#include "main.h"

/**
<<<<<<< HEAD
 * _print_binary - function to print base two numbers
 * @valist: valist parameter
 *
 * Return: str array
=======
 * _print_binary - function to print unsigned integers
 * @valist: va_list parameter
 *
 * Return: length of number
>>>>>>> a4649eebad0f9616ac9f780cc52e7ffc07d9625f
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	str = convert(num, 2, 1);
	return (_puts(str));
}

/**
<<<<<<< HEAD
 * _print_octal - function to print octal numbers
 * @valist: valist parameter
 *
 * Return: str array
=======
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

/**
 * _print_octal - prints numbers in octal format
 * @valist: va_list parameter
 *
 * Return: length of number
>>>>>>> a4649eebad0f9616ac9f780cc52e7ffc07d9625f
 */
int _print_octal(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

<<<<<<< HEAD
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
=======
	str = convert(num, 8, 1);
>>>>>>> a4649eebad0f9616ac9f780cc52e7ffc07d9625f
	return (_puts(str));
}
