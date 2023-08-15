#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Represents a dog's information.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name of the dog.
 *
 * Description: This structure defines the attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name of the dog.
 *
 * Description: This function initializes a dog structure with given attributes
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints the information of a dog.
 * @d: Pointer to the dog structure to be printed.
 *
 * Description: This function prints the attributes of a dog structure.
 */
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;
/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner's name of the dog.
 *
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _DOG_H_ */
