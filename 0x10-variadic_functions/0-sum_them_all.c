#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - write a function that returns
 * adds all its parameters
 * @n: start of input variables
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	/* should initialize the argument list from the start */
	va_start(ap, n);

	/* should iterate through all parameter values*/
	for (param = 0; param < n; param++)
		/* it shouls get the next parameter value and add it to sum*/
		sum += va_arg(ap, int);
	/*Clean it up*/
	va_end(ap);

	return (sum);
}

