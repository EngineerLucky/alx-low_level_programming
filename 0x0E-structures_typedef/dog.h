#ifndef DOG_H
#define DOG_H


	/**
	 * struct dog -a function for a dog's basic info
	 * @name: its age
	 * @age: its age
	 * @owner: Third member
	 *
	 * Description: Longer description
	 */
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


	/**
	 * dog_t - Write a function that  typedef for struct dog
	 */
	typedef struct dog dog_t;


	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
	dog_t *new_dog(char *name, float age, char *owner);
	void free_dog(dog_t *d);
	char *_strcpy(char *dest, char *src);
	int _strlen(char *s);


	#endif

