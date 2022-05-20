#include "main.h"

/**
 * _printf - main printf function
 * @format: string parameter
 *
 * Return: count of characters in @format
 */
int _printf(const char *format, ...)
{
	register int count = 0;
	va_list args;
	const char *str;
	int (*func)(va_list);

	va_start(args, format);
	str = format;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				func = get_func(*str);
				if (!func)
				{
					_putchar(*str);
					count++;
				}
				else
					count += func(args);
			}	
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}
	va_end(args);
	return (count);
}
