#include "unistd.h"
/**
 * main - Entry point
 * @c: the character to print
 * Return: return(0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
