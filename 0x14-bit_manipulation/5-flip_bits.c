#include "main.h"
/**
  *flip_bits - returns no of bits u would flip to get
  *from one no to another
  *@n: first no to compare
  *@m: second no to compare
  *Return: no of bits one would like to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;

	x = n ^ m;
	for (y = 0; x > 0;)
	{
		if ((x & 1) == 1)
			y++;
		x = x >> 1;
	}
	return (y);
}
