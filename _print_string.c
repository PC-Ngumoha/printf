#include "main.h"

/**
 * _print_string - prints a string to the standard output
 * @str: string parameter
 *
 * Return: nothing
 */
void _print_string(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
