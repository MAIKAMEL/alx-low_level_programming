#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
void print_alphabet_x10(void)
{
	int ch, line;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		printf("\n");
	}
}
