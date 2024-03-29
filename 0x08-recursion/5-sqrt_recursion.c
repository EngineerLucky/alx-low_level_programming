#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -Writes a function that
 * returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - it recurses to find the natural
 * square root of that number
 * @n: parameter
 * @i: iterator
 *
 * Return: square root return
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
