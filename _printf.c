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
	int (*func)(va_list, flag_t *, mod_t *);
	flag_t f = {0, 0, 0};
	mod_t m = {0, 0, 0};
	int size, count = 0;
	char width[10] = "";

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
			for (; get_flags(*str, &f); str++)
			{}
			for (size = 0; *str >= 48 && *str <= 57; str++)
			{
				width[size] = *str;
				size++;
			}
			width[size] = '\0';
			get_width(width, &m);
			for (; get_modifier(*str, &m); str++)
			{}
			func = get_func(*str);
			count += (func) ? func(args, &f, &m)
					: _printf("%%%c", *str);
		} else
			count += _putchar(*str);
	}
	_putchar(-1), va_end(args);
	return (count);
}
