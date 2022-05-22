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


/**
 * _print_specifier - function to handle custom conversion specifier
 * @valist: variable list of arguments
 * @f: pointer to flag_t
 *
 * Return: counts of characters
 */
int _print_specifier(va_list valist, flag_t *f)
{
	int i;
	int count = 0;
	char *hex;
	char *str = va_arg(valist, char *);

	if (str == NULL)
	{
		str = "(null)";
		return (_puts(str));
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{

			count += _putchar('\\');
			count += _putchar('x');
			hex =  convert(str[i], 16, 0);
			if (!hex[1])
			{
				count += _putchar('0');	
			}
			count += _puts(hex);
		}
		else
			count += _putchar(str[i]);
	}
	(void)f;
	return (count);
}
