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
void _print_str(va_list valist)
{
	char *str = va_arg(valist, char *);
	if (!str)
		return (-1);
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}

/**
 * _print_percent - prints a percent sign '%' to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
void _print_percent(va_list valist)
{
	_putchar('%');
	return (0);
}
