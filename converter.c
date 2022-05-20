#include "main.h"

/**
 * convert - converts a decimal number into any number base
 * @num: unsigned int parameter
 * @base: int parameter
 *
 * Return: ptr to beginning of string
 */
char *convert(unsigned int num, int base)
{
	static char buffer[40];
	static char *ptr;
	char *map;

	map = "0123456789abcdef";
	ptr = &buffer[39];
	*ptr = '\0';

	do {
		ptr--;
		*ptr = map[num % base];
		num = num / base;
	} while (num != 0);

	return (ptr);
}
