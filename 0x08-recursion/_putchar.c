#include "unistd.h"
/**
 * main - Entry point
 * @c: the character to print
 * Description: 
 * Return: return(0)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
