#include "main.h"
/**
 * print_numbers - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48)
			num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
