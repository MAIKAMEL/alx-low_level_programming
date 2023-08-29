#include "main.h"

/**
 * *_memcpy - Entry point
 * Description: print all lowercase alphabit except e and q
 * @dest: it is an input
 * @src: it is an input
 * @n: it is an input
 * Return: return(0)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
