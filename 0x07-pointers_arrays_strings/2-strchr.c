#include "main.h"
/**
 * _strchr - it wites a function that locates a character in a string
 *
 * @s: a pointer to our string array input
 * @c: a character to locate from input array
 *
 * Return: the first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	 */
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
