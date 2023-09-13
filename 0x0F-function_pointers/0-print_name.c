#include "function_pointers.h"

/**
 * print_name_as_is - prints a name
 * @name: string name
 * @f: printing function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name)
}
