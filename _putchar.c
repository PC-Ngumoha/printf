#include <unistd.h>

/**
 * _putchar - function to print a char
 * @c: argument
 *
 * Return: Always 1 when successful, else -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1);
}
