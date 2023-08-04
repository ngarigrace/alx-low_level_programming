#include <stdio.h>
/**
  *main - print name followed by new line
  *@argc: no of command line arguments
  *@argv: array that contains command line arg
  *Return: 0 success
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
