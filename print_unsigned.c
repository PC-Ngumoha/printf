#include "main.h"

/**
 * _ print_binary - function to print unsigned integers
 * @valist: valist parameter
 *
 * Return: Always 0
 */
int _print_binary(va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	unsigned int i, j;

	print_unsigned(num);
	return(0);
}
