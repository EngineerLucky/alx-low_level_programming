#include "main.h"

/**
 * _pow_recursion - writes a function that
 * returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: value of a given number passed to the function
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
