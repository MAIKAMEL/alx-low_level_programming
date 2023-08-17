#include "main.h"
/**
 * _isupper - Entry point
 * Description: print all lowercase alphabit except e and q
 * @c: it is an input
 * Return: return(0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
