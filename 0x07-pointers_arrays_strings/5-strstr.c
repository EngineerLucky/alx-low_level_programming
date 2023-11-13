#include "main.h"
/**
 * _strstr - write a function that locates a substring
 * @haystack: an input string to search for matching
 * substrings
 * @needle: a subtring to search for
 *
 * Return: a pointer to the beginning
 * of the located substring or
 * NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * should initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	 */
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}

