#include "main.h"

/**
 * _print_char - prints a character to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
int _print_char(va_list valist)
{
	_putchar(va_arg(valist, int));
	return (0);
}

/**
 * _print_str - prints a string to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
int _print_str(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (!str)
		str = "(null)";

	return (_puts(str));
}

/**
 * _print_percent - prints percent
 * @valist: parameter arg
 *
 * Return: Always the percent character
 */
int _print_percent(va_list valist)
{
	return (_putchar('%'));
}
