#include "main.h"

/**
 * _print_address - prints out the address of a number
 * @valist: va_list parameter
 *
 * Return: count of digits in address
 */
int _print_address(va_list valist)
{
	unsigned long num = va_arg(valist, unsigned long);
	char *str = convert_address(num);

	return (_puts(str));
}

/**
 * convert_address - converts an address supplied into hex format
 * @num: unsigned long parameter
 *
 * Return: address as a hex string
 */
char *convert_address(unsigned long num)
{
	static char buff[15];
	char *map;
	int i;

	for (i = 0; i < 16; i++)
		buff[i] = '0';

	map = "0123456789abcdef";
	i = 14;
	buff[i] = '\0';
	do {
		i--;
		buff[i] = map[num % 16];
		num = num / 16;
	} while (num != 0);
	buff[1] = 'x';
	return (buff);
}

