#include "main.h"
/**
 * print_sign - Entry point
 * Description: print all lowercase alphabit except e and q
 * @n: it is an input
 * Return: return(0)
 */
int print_sign(int n)
{
	int flag;

	if (n > 0)
	{
		printf("+");
		flag = 1;
	}
	else if (n == 0)
	{
		printf("0");
		flag = 0;
	}
	else if (n < 0 )
	{
		printf("-");
		flag = -1;
	}
	return flag;
}
