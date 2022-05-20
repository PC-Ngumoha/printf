#include "main.h"

int (*get_func(char c))(va_list)
{
	id char_ids[] = {
		{'d', _print_dec},
		{'i', _print_dec},
		{'s', _print_str},
		{'c', _print_char},
		{'%', _print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (char_ids[i].symbol != NULL)
	{
		if (char_ids[i].symbol == c)
		{
			return (char_ids[i].func);
		}
		i++;
	}
	return (NULL);
}
