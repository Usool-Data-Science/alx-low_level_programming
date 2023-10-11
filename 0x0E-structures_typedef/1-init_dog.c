#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - dog structure initializer
  * @d: address to the dog structure
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Name of the dog owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
