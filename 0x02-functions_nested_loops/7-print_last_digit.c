
#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: print all lowercase alphabit except e and q
 * @n: it is an input
 * Return: return(0)
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = (-1) * (n % 10);
	else
		digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
