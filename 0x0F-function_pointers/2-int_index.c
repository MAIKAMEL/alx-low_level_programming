#include "function_pointers.h"

/**
 * int_index - searching for integer
 * @array: the int array
 * @size: the size of array
 * @cmp: the compare function
 * Return: return the index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
