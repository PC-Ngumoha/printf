#include "main.h"

/**
 * _realloc_int - reallocates the memory earlier allocated to an int pointer
 * @old_mem: pointer to the old memory location
 * @newsize: size of the new memory allocation
 * @oldsize: size of the old memory allocation
 *
 * Return: pointer to the new memory location
 */
int *_realloc_int(int *old_mem, int newsize, int oldsize)
{
	int *new_mem, i;
	
	if (old_mem == NULL)
		return (NULL);

	if (newsize < oldsize)
		return old_mem;

	new_mem = malloc(sizeof(int) * newsize);
	if (new_mem == NULL)
		return (NULL);

	for (i = 0; i < newsize; i++)
		new_mem[i] = 0;
	for (i = 0; i < oldsize; i++)
	{
		new_mem[i] = old_mem[i];
	}
	free(old_mem);
	return (new_mem);
}
