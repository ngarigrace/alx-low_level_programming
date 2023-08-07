#include "main.h"
#include <stdlib.h>
/**
  *str_concat - concatenate two strings
  *@s1: string one
  *@s2: string two
  *Return: ptr to concat string which
  *mem was allocated for
  */
char *str_concat(char *s1, char *s2)
{
	size_t a, b, c, temp;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}
	for (temp = 0; temp < b; temp++)
	{
		ptr[a] = s2[temp];
		c++;
	}
	return (ptr);
}
