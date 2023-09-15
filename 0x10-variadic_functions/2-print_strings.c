#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - print string
 *@separator: separator between two numbers
 *@n: the number of parameters
 *Return: if n = 0 return 0, else return the sum
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;

	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);
		if (c == NULL)
			c = "(nil)";
		printf("%s", c);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
