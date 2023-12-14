#include "main.h"

/**
 * get_endianness - writes a function that checks the endianess
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
