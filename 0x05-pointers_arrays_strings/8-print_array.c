#include"main.h"
#include <stdio.h>
/**
 * print_array - it prints elements of an array of integers.
 *
 * @n: the elements parameter input
 * @a: the string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
