#include "main.h"
#include <stdlib.h>
/**
  *argstostr -  concatenates all the arguments of your program
  *@ac: int input
  *@av: double pointer array
  *Return: 0
  */
char *argstostr(int ac, char **av)
{
	int a, n, r = 0, l = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;
	ptr = malloc(sizeof(char) * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
		{
			ptr[r] = av[a][n];
			r++;
		}
		if (ptr[r] == '\0')
		{
			ptr[r++] = '\n';
		}
	}
	return (ptr);
}

