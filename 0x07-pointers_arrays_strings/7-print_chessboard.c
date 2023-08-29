#include "main.h"

/**
 * *_memset - Entry point
 * Description: print all lowercase alphabit except e and q
 * @a: it is an input
 * Return: return(0)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
