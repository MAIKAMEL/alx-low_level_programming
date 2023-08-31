#include "unistd.h"
/**
 * main - Entry point
 * @c: the character to print
 * Description: 
 * Return: return(0)
 */
int _putchar(char c)
{
	retuen (write(1, &c, 1));
}
