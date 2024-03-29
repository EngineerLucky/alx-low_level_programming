#include "main.h"
/**
 * rev_string - it reverses a string
 *
 * @s: the string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*it find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*it swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*its -1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}

}
