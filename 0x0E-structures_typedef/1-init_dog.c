#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - function that initialize a variable of type struct dog
  *@d: pointer to struct of new dog
  *@name: name of new dog
  *@age: age of new dog
  *@owner: new dogs owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
