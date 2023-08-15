#include "main.h"
/**
 * main - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	printf("\n");
}
