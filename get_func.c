#include "main.h"

/**
 * get_func - returns the function to use based on an inputted char
 * @c: char parameter
 *
 * Return: pointer to function
 */
int (*get_func(char c))(va_list)
{
	id char_ids[] = {
		{'d', _print_dec},
		{'i', _print_dec},
		{'s', _print_str},
		{'c', _print_char},
		{'b', _print_binary},
		{'x', _print_hexa_lower},
		{'X', _print_hexa_upper},
		{'o', _print_octal},
		{'u', _print_unsigned},
		{'%', _print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (char_ids[i].symbol != '\0')
	{
		if (char_ids[i].symbol == c)
		{
			return (char_ids[i].func);
		}
		i++;
	}
	return (NULL);
}
