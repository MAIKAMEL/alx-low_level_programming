#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print a random numbers
 * Return: return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%iis positive\n", n);
	}
	else if(n<0)
	{
		printf("%iis negative\n, n");
	}
	else
	{
		printf("%i"is zero\n", n);
	}
	return (0);
}
