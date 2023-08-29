#include "main.h"

/**
 * *_strstr - Entry point
 * Description: print all lowercase alphabit except e and q
 * @haystack,: it is an input
 * @needle: it is an input
 * Return: return(0)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
