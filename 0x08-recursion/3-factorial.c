#include "main.h"

/**
 * factorial - Entry point
 * Description:pinter to string
 * @n: it is an input
 * Return: int n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
