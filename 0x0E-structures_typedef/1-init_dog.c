#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: points to struct dog
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
