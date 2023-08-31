#include "main.h"
/**
  *set_bit - sets the value of a bit to 1
  *@n: ptr to the bit to be manipulated
  *@index: position of bit to be man
  *Return: 1 if succes -1 if not
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	a = 1;
	a = a << index;
	*n = ((*n) | a);
	return (1);
}
