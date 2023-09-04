#include "main.h"

/**
 * *create_array - creates an array of char, initialize with spesific char
 * @size: size of array
 * @c: char to inintialize
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
