#include "main.h"
/**
 * _strncpy - The function should copy a string.
 *
 * @dest: the pointer to destination input buffer
 * @src: the pointer to source input buffer
 * @n: the bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * must iterate through src array
	 * where there is no null byte
	 * the first n bytes of source
	 * string placed in dest wont be
	 * null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * it must write an additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
