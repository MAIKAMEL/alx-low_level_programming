#include <stdio.h>
/**
 * main - Entry point
 * Description: lowecase in new line 
 * except e and q letter 
 * Retrun: return 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'e' || lower == 'q')
		{
			lower++;
		}
		putchar(lower);
		lower++;
	}
	printf("\n");
	return (0);
}
