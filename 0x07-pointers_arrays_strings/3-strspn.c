#include "main.h"

/**
 * _strspn - Entry point
 * Description: print all lowercase alphabit except e and q
 * @s: it is an input
 * @accept: it is an input
 * Return: return(0)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] !=  s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
