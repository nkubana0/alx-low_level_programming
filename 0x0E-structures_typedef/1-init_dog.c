#include "dog.h"

/**
* init_dog - nitialize a variable of type struct dog
* @d: a pointer to the dog struct
* @name: a pointer to the name
* @age: age of the dog
* @owner: the owner
* Return: always returns a void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
