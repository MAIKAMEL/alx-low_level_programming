#include "main.h"

/**
 * *_strdup - return a pointer
 * @str:string
 * Return: return(0)
 */


char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *a;

	i f(str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			a[i] = str[i];
	}
	return (a);
}

