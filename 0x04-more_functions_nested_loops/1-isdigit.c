#include "main.h"
/**
 * _isdigit - Entry point
 * Description: print all lowercase alphabit except e and q
 * @c: it is an input
 * Return: return(0)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
