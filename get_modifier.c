#include "main.h"

/**
 * get_modifier - sets the length modifier based on characters found
 * @elem: char parameter
 * @m: pointer to mod_t struct
 *
 * Return: 1 or 0 (Depending on whether the character is found)
 */
int get_modifier(char elem, mod_t *m)
{
	int i = 0;

	switch (elem)
	{
		case 'l':
			m->l = 1;
			i = 1;
			break;
		case 'h':
			m->h = 1;
			i = 1;
			break;
	}
	return (i);
}

/**
 * get_width - determines the value of the specified width
 * @str: string parameter
 * @m: pointer to mod_t struct
 *
 * Return: void
 */
void get_width(char *str, mod_t *m)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
		num = (num * (i * 10)) + (str[i] - '0');
	if (num >= 0)
		m->width = num;
}
