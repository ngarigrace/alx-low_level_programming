#include "function_pointers.h"
/**
  *int_index -  a function that searches for an integer
  *@array: array holding int to be executed
  *@size: size of array
  *@cmp: a pointer to the function to be used to compare values
  *Return: int elmt match
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
