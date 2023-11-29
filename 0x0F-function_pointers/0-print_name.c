#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - write a function that
 * is to print a name
 *
 * @name: name to be print printed
 * @f: function pointer that does not return anything
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
