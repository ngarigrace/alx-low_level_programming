#include "main.h"
/**
  *print_bin - print bin rep of a no
  *@n: decimal input
  *Return: nothing
  */
void print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
  *print_binary - a function that prints the
  *binary representation of a number
  *@n: decimal to convert
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bin(n);
	}
}
