#include "main.h"

/**
 * _putchar - prints a character at a time to the screen
 * @c: char parameter
 *
 * Return: -1 or 1
 */
int _putchar(char c)
{
	char buffer[1024];

	return (write(1, &buffe, 1));
}


/**
 * _puts - Helps print a string to the terminal
 * @str: string parameter
 *
 * Return: number of characters in @str
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
