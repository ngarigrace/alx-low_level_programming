#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - function that creates a new dog
  *@name: new dogs name
  *@age: new dogs age
  *@owner: new dogs owner
  *Return: ptr to new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n1, o1, a;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n1 = 0; name[n1]; n1++)
		;
	n1++;
	dog->name = malloc(n1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (a = 0; a < n1; a++)
		dog->name[a] = name[a];
	dog->age = age;
	for (o1 = 0; owner[o1]; o1++)
		;
	o1++;
	dog->owner = malloc(o1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (a = 0; a < o1; a++)
		dog->owner[a] = owner[a];
	return (dog);
}
