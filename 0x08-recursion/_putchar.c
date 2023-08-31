#include "unistd.h"

/**
 * _putchar - Entry point
 * @c: the character to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
