#include "main.h"

/**
 * _print_binary - function to print base two numbers
 * @valist: valist parameter
 * @f: pointer to flag_t
 *
 * Return: length of number
 */
int _print_binary(va_list valist, flag_t *f)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	(void)f;

	str = convert(num, 2, 1);
	return (_puts(str));
}

/**
 * _print_hexa_upper - prints numbers in uppercase hexadecimal format
 * @valist: va_list parameter
 * @f: pointer to flag_t
 *
 * Return: length of number
 */
int _print_hexa_upper(va_list valist, flag_t *f)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	register int count = 0;

	str = convert(num, 16, 0);
	if (f->hash && str[0] != '0')
		count += _puts("0X");

	count += _puts(str);
	return (count);
}

/**
 * _print_hexa_lower - prints numbers in lowercase hexadecimal format
 * @valist: va_list parameter
 * @f: pointer to flag_t
 *
 * Return: length of number
 */
int _print_hexa_lower(va_list valist, flag_t *f)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	register int count = 0;

	str = convert(num, 16, 1);
	if (f->hash && str[0] != '0')
		count += _puts("0x");

	count += _puts(str);
	return (count);
}

/**
 * _print_octal - prints numbers in octal format
 * @valist: va_list parameter
 * @f: pointer to flag_t
 *
 * Return: length of number
 */
int _print_octal(va_list valist, flag_t *f)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	register int count = 0;

	str = convert(num, 8, 1);

	if (f->hash && str[0] != '0')
		count += _putchar('0');

	count += _puts(str);
	return (count);
}

/**
 * _print_unsigned - prints unsigned numbers
 * @valist: valist parameter
 * @f: pointer to flag_t
 *
 * Return: str array
 */
int _print_unsigned(va_list valist, flag_t *f)
{
	unsigned int num = va_arg(valist, unsigned int);
	char *str;

	(void)f;

	str = convert(num, 10, 1);
	return (_puts(str));
}
