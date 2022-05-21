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
	return (1);
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

int _print_specifier(va_list valist)
{
	int i;
	int count;
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
