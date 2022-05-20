#include "main.h"

/**
 * _printf - main printf function
 * @format: string parameter
 *
 * Return: count of characters in @format
 */
int _printf(const char *format, ...)
{
	register int count;
	va_list args;
	char *str;
	va_start(args, format);

	str = format;
	while (*str)
	{
	}
	va_end(args);
	return (count);
}
