#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	/* reserving memory to struct*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	/* Cpunting name pointer*/
	if (name == NULL)
	{
		free(new_dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(new_dog);
		free(name);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
