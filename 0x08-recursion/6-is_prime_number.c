#include "main.h"

/**
 * is_prime_number - Entry point
 * Description:pinter to string
 * @n: it is an input
 * @o: it is an input
 * Return: 0 or 1
 */
int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Entry point
 * Description:pinter to string
 * @n: it is an input
 * @o: it is an input
 * Return: int
 */
int check_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, o + 1));
}
