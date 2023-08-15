#include "main.h"
/**
 * _islower - Entry point
 * Description: print all lowercase alphabit except e and q
 * Return: return(0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
