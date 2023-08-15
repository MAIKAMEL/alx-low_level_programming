#include "main.h"
/**
 * main - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	printf("\n");

	return (0);
}
