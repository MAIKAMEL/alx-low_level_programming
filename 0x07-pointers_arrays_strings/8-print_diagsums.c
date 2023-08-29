#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * Description: print all lowercase alphabit except e and q
 * @a: it is an input
 * @size: it is an input
 * Return: return(0)
 */
void print_diagsums(int *a, int size)
{
	int i; s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s1 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n ", s2);
}
