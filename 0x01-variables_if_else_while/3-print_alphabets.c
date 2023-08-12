#include <stdio.h>
/**
 * main - entry point
 * Description:
 * Return: return 0
 *
 */
int main(void)
{
	char lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar("\n");
	return (0);
}
