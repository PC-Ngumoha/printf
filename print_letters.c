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

/**
 * _print_specifier - function to handle custom concersion specifier
 * @valist: variable list of arguments
 *
 * Return: counts
 */
int _print_specifier(va_list valist)
{
	unsigned int i;
	int count;
	char *hex;
	char *str = va_arg(valist, char *);
	
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			hex =  convert(str[i], 16, 0);
			count += _puts(hex);
			count = count + 4;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

int print_hexa(char c)
{
	int i;
	char size[2];


	size[0] = c / 16;
	size[1] = c % 16;

	for (i = 0; i < 2; i++)
	{
		_putchar('0' + size[i]);
	}
	return(0);
}
