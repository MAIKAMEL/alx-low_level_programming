#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit);
		digit++;
	}
	printf("\n");
	return (0);
}
