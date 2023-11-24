#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - write a fuction that
 * allocates memory using malloc
 * @b: number of bytes in memory to allocate
 * Return: a pointer to allocated memory(Success), 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
