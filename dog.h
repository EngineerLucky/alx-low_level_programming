#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a
 *  dog structure with the following elements
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t -the Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
