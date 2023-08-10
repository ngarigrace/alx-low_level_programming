#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
  *is_digit - check if a str contains a non digit char
  *@s: str to be evaluated
  *Return: zero if non digit is found and 1 if digit is found
  */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
  *_strlen - returns len of a str
  *@s: str to evaluate
  *Return: len of string
  */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
  *errors - handle error for main
  */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
  *main - mul two + no.s
  *@argc: no of argument
  *@argv: no of arrays in argument
  *Return: 0
  */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int leng1, leng2, leng, a, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	leng1 = _strlen(s1);
	leng2 = _strlen(s2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (a = 0; a <= leng1 + leng2; a++)
		result[a] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit1 = s1[leng1] - '0';
		carry = 0;
		for (leng2 = _strlen(s2) - 1; leng2 >= 0; leng2--)
		{
			digit2 = s2[leng2] - '0';
			carry += result[leng1 + leng2 + 1] + (digit1 * digit2);
			result[leng1 + leng2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[leng1 + leng2] += carry;
	}
	for (a = 0; a < leng - 1; a++)
	{
		if (result[a])
			b = 1;
		if (b)
			_putchar(result[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

