#include "main.h"
#include <stdlib.h>
/**
  *create_array - create an array of characters
  *@size: an input for size of array in int
  *@c: store strings of char
  *Return: a pointer to base char c
  */
char *create_array(unsigned int size, char c)
{
	size_t a;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}
	return (ptr);
}
