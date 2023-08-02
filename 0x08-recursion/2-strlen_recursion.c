#include "main.h"
/**
  *_strlen_recursion - returns th length of string
  *@s: the string to be measured
  *Return: the length of the string
  */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
