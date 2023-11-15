#include "main.h"
/**
 * _print_rev_recursion - a funtion that Prints a string in reverse.
 * @s: parameter of the funtion
 * Return : a string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
