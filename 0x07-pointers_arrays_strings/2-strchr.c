#include "main.h"

/**
 * *_strchr - Entry point
 * Description: print all lowercase alphabit except e and q
 * @s: it is an input
 * @c: it is an input
 * Return: return(0)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
