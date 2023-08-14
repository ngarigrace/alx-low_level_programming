#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - function that creates a new dog
  *@name: new dogs name
  *@age: new dogs age
  *@owner: new dogs owner
  *Return: ptr to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t n1, a, o1;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	for (n1 = 0; name[n1] != '\0'; n1++)
		;
	n1++;
	d->name = malloc(sizeof(char) * n1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (a = 0; a < n1; a++)
		d->name[a] = name[a];
	d->age = age;
	for (o1 = 0; owner[o1] != '\0'; o1++)
		;
	o1++;
	d->owner = malloc(sizeof(char) * o1);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (a = 0; a < o1; a++)
		d->owner[a] = owner[a];
	return (d);
}
