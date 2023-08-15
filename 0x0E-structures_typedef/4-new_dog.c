#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name of the dog.
 *
 * Return: Pointer to the newly created dog structure, or NULL on failure.
 *
 * Author: MedAMEZZANE
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *new_dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(i * sizeof(new_dog->name));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		new_dog->name[k] = name[k];

	new_dog->age = age;

	new_dog->owner = malloc(j * sizeof(new_dog->owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		new_dog->owner[k] = owner[k];

	return (new_dog);
}
