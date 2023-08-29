#include "main.h"
/**
 * _islower - Entry point
 * Description: print all lowercase alphabit except e and q
 * @s: it is an input
 * @b: it is an input
 * @n: it is an input
 * Return: return(0)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
