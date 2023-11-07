#include "main.h"
/**
 * _strlen - It should return the length of a string
 *
 * @s: the string parameter input
 *
 * Return: the length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
