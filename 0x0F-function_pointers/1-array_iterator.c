#include "function_pointers.h"
/**
  *array_iterator - a functionthat iterates through an array
  *@array: array to be executed
  *@size: size of array
  *@action: function ptr to array
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}
