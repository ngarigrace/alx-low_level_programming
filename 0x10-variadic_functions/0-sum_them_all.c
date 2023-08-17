#include "variadic_functions.h"
/**
  *sum_them_all -  sum of all its parameters
  *@n: no of arg to ba passed to sum
  *Return: sum of nos
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list holder;

	va_start(holder, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(holder, const unsigned int);
		}
	}
	va_end(holder);
	return (sum);
}
