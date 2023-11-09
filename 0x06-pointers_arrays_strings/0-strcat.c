#include "main.h"
/**
 * _strcat - the function should concatenates
 * two strings.
 *
 * @dest: the pointer to destnation input
 * @src: the pointer to source input
 *
 * Return: the pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*it find the size of dest array*/
	while (dest[c])
		c++;

	/*should iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*must append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}

