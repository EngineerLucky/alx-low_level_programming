#include "main.h"

/**
 * get_endianness - checks if a machine checks how little or endian a machine is
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
