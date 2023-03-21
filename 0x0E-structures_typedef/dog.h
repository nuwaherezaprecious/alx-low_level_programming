#ifndef _HEADER_
#define _HEADER_
#define dog_t struct dog

/**
 * struct dog - dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: dog attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/*
 * dog_t - Typedef for the dog structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
