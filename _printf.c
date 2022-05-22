#include "main.h"

/**
 * _printf - main printf function
 * @format: string parameter
 *
 * Return: count of characters in @format
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *str;
	int (*func)(va_list, flag_t *);
	flag_t f = {0, 0, 0};

	register int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (str = format; *str; str++)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flags(*str, &f))
				str++;
			func = get_func(*str);
			count += func(args, &f);
		}
		else
			count += _putchar(*str);
	}
	_putchar(-1);
	va_end(args);
	return (count);
}
