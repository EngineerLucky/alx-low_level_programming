#include "main.h"
/**
 * _strncat - the function should concatenates two strings.
 *
 * @dest: the pointer to destination input
 * @src: the pointer to source input
 * @n: the most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*must find size of dest array*/
	while (dest[c])
		c++;

	/**
	 * src do not need to be null terminated
	 * if it contains n or more bytes
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	/*should null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}

