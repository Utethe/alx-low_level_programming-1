#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initialises a struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a typedef (dog_t) of the struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (!ndog)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
