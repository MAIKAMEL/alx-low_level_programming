#include "main.h"
/**
 * print_to_98 - Entry point
 * Description: print all lowercase alphabit except e and q
 * @n: it is an input
 * Return: return(0)
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
