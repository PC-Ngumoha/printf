#include "main.h"

/**
 * _print_char - prints a character to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
int _print_char(va_list valist, flag_t f)
{
	(void)f;

	_putchar(va_arg(valist, int));
	return (1);
}

/**
 * _print_str - prints a string to the screen
 * @valist: variable list of arguments
 *
 * Return: void
 */
int _print_str(va_list valist, flag_t f)
{
	char *str = va_arg(valist, char *);

	if (!str)
		str = "(null)";
	(void)f;

	return (_puts(str));
}

/**
 * _print_specifier - function to handle custom conversion specifier
 * @valist: variable list of arguments
 *
 * Return: counts
 */
int _print_specifier(va_list valist, flag_t f)
{
	int i;
	int count = 0;
	char *hex;
	char *str = va_arg(valist, char *);

	if (str == NULL)
	{
		str = "(null)";
		_puts(str);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');
			hex =  convert(str[i], 16, 0);
			if (!hex[1])
			{
				_putchar('0');
			}
			_puts(hex);
			count = count + 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	(void)f;
	return (count);
}
