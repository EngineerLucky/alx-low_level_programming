#include "main.h"

/**
 * _strcpy - it copies a string from one pointer to another
 * including the terminating null byte (\0)
 *
 * @src: the source of string parameter input
 * @dest: the destination of string
 *
 * Return: the pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}
