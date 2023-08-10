#include "main.h"
#include <stdlib.h>
/**
  *_calloc - allocate n memory for array
  *@nmemb: no of block of mem
  *@size: size of element
  *Return: void ptr
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		ptr[a] = 0;
	return (ptr);
}
