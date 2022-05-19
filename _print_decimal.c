#include "main.h"

/**
 * _print_decimal - prints a number in decimal format to the screen
 * @val: integer parameter
 *
 * Return: void
 */
void _print_decimal(int val)
{
	int temp, *buffer, size = 1;
	int i;

	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return;
	temp = val;
	do {
		buffer[size - 1] = temp % 10;
		temp = temp / 10;
		if (temp == 0) /*If All digits have been printed*/
		{
			break;
		}
		size++;
		buffer = _realloc_int(buffer, size, size - 1);
		if (buffer == NULL)
		{
			return;
		}
	} while (temp > 0);

	/*printing out the content in the buffer*/
	for (i = size - 1; i >= 0; i--)
		_putchar('0' + buffer[i]);
	free(buffer);
}
