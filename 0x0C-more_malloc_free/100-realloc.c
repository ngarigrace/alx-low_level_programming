#include "main.h"
#include <stdlib.h>
/**
 *_realloc -  function that reallocates a memory
 *block using malloc and free
 *@ptr: former ptr to old mem allocated by malloc
 *@old_size: old size allocated by malloc in heap
 *@new_size: new size alloc'by realloc
 *Return: ptr to new allocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t a, max = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (a = 0; a < max; a++)
		p[a] = oldptr[a];
	free(ptr);
	return (p);
}
