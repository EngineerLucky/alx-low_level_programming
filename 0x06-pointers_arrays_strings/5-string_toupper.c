#include "main.h"
/**
 * string_toupper -the function that should change all
 * lowercase letters of a string
 * to uppercase.
 *
 * @s : the pointer to input char
 *
 * Return: @s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}

