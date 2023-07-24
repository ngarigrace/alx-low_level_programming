#include "main.h"
/**
  *_strlen - function that returns length of a string
  *@s: character of strings
  *Return: (0)
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
