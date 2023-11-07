#include "main.h"

/**
 * _puts - It should print a string, followed by a newline to stdout
 *
 * @str: The string parameter to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}

