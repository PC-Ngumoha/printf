#include "main.h"

/**
 * _print_char - prints a character to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
int _print_char(va_list valist)
{
	return (_putchar(va_arg(valist, int)));
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
