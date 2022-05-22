#include "main.h"

/**
 * _print_percent - prints a percent out to the screen
 * @valist: va_list parameter
 * @f: pointer to flag_t
 *
 * Return: number of characters
 */
int _print_percent(va_list valist, flag_t *f)
{
	(void)valist;
	(void)f;
	return (_putchar('%'));
}
