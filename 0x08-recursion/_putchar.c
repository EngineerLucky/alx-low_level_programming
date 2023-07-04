#include <unistd.h>

/**
 * This in my new _putchar(char c)
 */

int _putchar(char c)
{
	return write (STDOUT_FILENO, &c, 1);
}
