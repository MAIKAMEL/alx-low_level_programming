#include <stdio.h>
/**
 * main - Entry point
 * Description: lowecase in new line
 * Retrun: return 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		printf("\n");
		lower++;
	}
	printf("\n");
	return (0);
}
