#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: the new dog name
 * @age:  the new dog age
 * @owner: new dog owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j;
	int count_name, count_owner;

	my_dog = malloc(sizeof(dog_t));

	count_name = strlen(name);
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(count_name + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}


	for (i = 0; i < count_name; i++)
	{
		my_dog->name[i] = name[i];
	}
	my_dog->name[count_name] = '\0';


	count_owner = strlen(owner);
	my_dog->owner = malloc(count_owner + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	for (j = 0; j < count_owner; j++)
	{
		my_dog->owner[j] = owner[j];
	}

	my_dog->owner[count_owner] = '\0';
	my_dog->age = age;

	return (my_dog);
}
