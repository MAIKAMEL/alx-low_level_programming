#include <stdio.h>
/**
 * main - get the alphapet lowercase
 * DEscription: print all alphapet lowercase
 * Return: return(0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}
