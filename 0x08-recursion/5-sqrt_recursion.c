#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * Description:pinter to string
 * @n: it is an input
 * Return: pinter
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}


/**
 * _sqrt_recursion - Entry point
 * Description:pinter to string
 * @n: it is an input
 * @n: it is an input
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
