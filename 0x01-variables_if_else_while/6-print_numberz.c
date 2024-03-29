#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: It should print 0-9 using putchar
 *              while it is using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
