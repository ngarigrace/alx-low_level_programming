#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *op_add - a function that sums 2 nos
  *@a: no 1
  *@b: no 2
  *Return: sum of the 2 nos
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - subtracts two nos
  *@a: first no
  *@b: second no
  *Return: diff of a nad b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - mult two nos
  *@a: first no
  *@b: second no
  *Return: pdt of two nos
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  *op_div - divides two nos
  *@a: first no
  *@b: second no
  *Return: result of div of a by b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  *op_mod - remainder of div of two nos
  *@a: first no
  *@b: second no
  *Return: rem of div of a by b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
