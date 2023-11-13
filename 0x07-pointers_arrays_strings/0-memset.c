#include "main.h"
/**
 * _memset - a function that should fill
 * memory with a constant byte
 *
 * @s: an input pointer to char type that
 * represents the pointer to the
 * block of memory to fill
 * @b: an input variable of char type
 * represents the character to fill s
 * @n: an unsigned int variable
 *    the number of bytes to be filled
 *
 * Return: A pointer to the filled memory
 *         area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * must declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
