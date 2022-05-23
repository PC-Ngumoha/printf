#include "main.h"

/**
 * _print_char - prints a character to the screen
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 * @m: pointer to mod_t
 *
 * Return: void
 */
int _print_char(va_list valist, flag_t *f, mod_t *m)
{
	char ch = (char)va_arg(valist, int);

	(void)f;
	(void)m;

	_putchar(ch);

	return (1);
}

/**
 * _print_str - prints a string to the screen
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 * @m: pointer to mod_t
 *
 * Return: number of character
 */
int _print_str(va_list valist, flag_t *f, mod_t *m)
{
	char *str = va_arg(valist, char *);

	(void)f;
	(void)m;

	if (!str)
		str = "(null)";
	return (_puts(str));
}
