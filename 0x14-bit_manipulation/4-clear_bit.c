#include "main.h"
/**
  *clear_bit - set value of bit to 0
  *@n: ptr to no
  *@index: position to change bit to 0
  *Return:int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	a = 1;
	a = a << index;

	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = a ^ *n;
	return (1);
}
