#include "main.h"
/**
 * print_line - Entry point
 * Description: print all lowercase alphabit except e and q
 * @n: it is an input
 * Return: return(0)
 */
void print_line(int n)
{
	int len;

	if (n < 0)
		_putchar('\n');
	else
	{
		for (len = 1; len <= n; len++)
			_putchar('_');
		_putchar('\n');
	}
}
