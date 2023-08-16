#include <stdio.h>
#include <stdlib.h>
/**
  *print_opcodes - func that prints opcodes of program
  *@i: address of main func
  *@n: no of bytes to print
  *Return: void
  */
void print_opcodes(char *i, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%.2hhx", i[a]);
		if (a < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
  *main - print opcodes of own main func
  *@argc: arg count
  *@argv: arg vector
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}
