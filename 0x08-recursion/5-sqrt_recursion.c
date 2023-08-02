#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
  *_sqrt_recursion - returns the natural sqrt of a no
  *@n: no to calculate the sqrt of
  *Return: the resulting sqrt
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
  *actual_sqrt_recursion - recurses to find the natural sqrt of a no
  *@n: no to calculate the sqrt of
  *@i: iterator
  *Return: the resulting sqrt
  */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
