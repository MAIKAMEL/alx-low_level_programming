#include "main.h"
/**
 * times_table - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
void times_table(void)
{
	int num, mul, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			pro = num * mul;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar((pro / 10) + 48);
			_putchar((pro % 10) + 48);
		}
		_putchar('\n');
	}
}
