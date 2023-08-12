#include <stdio.h>
/**
 * main - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
int main(void)
{
	int digit = '0';

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	printf("\n");
	return (0);
}
