#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name of the dog.
 *
 * Description: This function initializes a dog structure with the given attributes.
 *
 * Author: MedAMEZZANE
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
