#include "main.h"
/**
  *binary_to_uint - a function that converts a binary
  *number to an unsigned int
  *@b: a char ptr to a string containing binary nos
  *Return: the converted output
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, j, sum, leng, pow;
	int base;

	base = 2;
	sum = 0;
	pow = 1;

	if (b == NULL)
		return (0);
	for (leng = 0; b[leng] != '\0'; leng++)
		;
	if (leng == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		for (j = leng - 1; j > 0; j--)
			pow = pow * base;
		sum = sum + (pow * (b[a] - 48));
		leng--;
		pow = 1;
	}
	return (sum);
}
