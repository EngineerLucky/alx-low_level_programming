#include"main.h"

/**
 * print_line - a straight line should be printed
 *
 * @n: the number of times the _ character
 *     should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
