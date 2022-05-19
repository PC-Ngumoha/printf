#include "main.h"

/**
 * _printf - personal version of the standard printf function
 * @format: string parameter
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list valist;

	va_start(valist, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(valist, int));
					count++;
					i++;
					break;
				case 's':
					_print_string(va_arg(valist, char *));
					count++;
					i++;
					break;
				case '%':
					_putchar('%');
					count++;
					i++;
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(valist);
	return (count);
}
