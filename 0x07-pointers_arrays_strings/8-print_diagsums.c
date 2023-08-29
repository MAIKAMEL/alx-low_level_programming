#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * Description: print all lowercase alphabit except e and q
 * @a: it is an input
 * @size: it is an input
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		s2 += a[i * size + (size - i - 1)];
	}

	printf("%d, ", s1);
	printf("%d\n ", s2);
}
