#include "main.h"
/**
 * leet - the function should encodes a string into 1337
 *
 * @s: a string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*must iterate values in array s*/
	while (s[c] != '\0')
	{
		
		for (i = 0; i < 5; i++)
		{
			if (s[c] == sl[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
