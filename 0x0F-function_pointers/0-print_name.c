#include "function_pointers.h"
/**
  *print_name - function that prints name
  *@f: variable to hold the str name
  *@name: name of person
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
