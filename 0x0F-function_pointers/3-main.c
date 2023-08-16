#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - perform calc func on command line
  *@argc: arg count
  *@argv: arg vector
  *Return: results of cal func operation
  */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *op;
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	op = (argv[2]);
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && y == 0) || (*op == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
