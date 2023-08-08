#include "main.h"
#include <stdlib.h>
/**
  *count_word - helper function to count the number of words
  *in a str
  *@s: str input
  *Return: no of words
  */
int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}
/**
  * **strtow - function that splits a string into words.
  *@str: string to be split
  *Return: pointer to array of strings
  *or NULL(error)
  */
char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (start < end)
					*t++ = str[start++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	m[k] = NULL;
	return (m);
}
