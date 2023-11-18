#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that printing all arguments it receives
 *
 * @argc: the number of arguments passed
 * @argv: an array pointer that is holding arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
