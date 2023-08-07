#include "main.h"
#include <stdlib.h>
/**
  *_strdup - return a ptr to a newly allocated space in mem
  *and also duplicate the string it holds to new space
  *@str: input string
  *Return: ptr to mem allocated whch is an array of chars
  */
char *_strdup(char *str)
{
	size_t a, b;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		strdout[b] = str[b];
	}
	return (strdout);
}
