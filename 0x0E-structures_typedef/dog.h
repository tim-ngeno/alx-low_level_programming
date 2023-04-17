#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for variable dog
 * @name: variable for dog name
 * @age: variable for dog age
 * @owner: variable for dog owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* ifndef DOG_H */
