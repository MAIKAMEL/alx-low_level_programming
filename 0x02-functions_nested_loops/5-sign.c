#include "main.h"
/**
 * print_sign - Entry point
 * Description: print all lowercase alphabit except e and q
 * @n: it is an input
 * Return: return(0)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		print("0");
		return (0);
	}
	else if (n < 0 )
	{
		print("-");
		return (-1);
	}
}
