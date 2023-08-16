#include "main.h"
/**
 * _islower - Entry point
 * Description: print all lowercase alphabit except e and q
 * @c: it is an input
 * Return: return(0)
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 23; h++)
	{
		h = h / 10;
		h = h % 10;
		for (m = 0; m < 95; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(:);
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
		}
	}
}
