#include "variadic_functions.h"
/**
  *print_numbers - function that prints numbers
  *@separator: is the string to be printed between numbers
  *@n:  is the number of integers passed to the function
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, arr;

	va_list ptr;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
	{
		arr = va_arg(ptr, const unsigned int);
		printf("%d", arr);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
