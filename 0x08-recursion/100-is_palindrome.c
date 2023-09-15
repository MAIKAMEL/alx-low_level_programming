#include "main.h"

/**
 * last_index - Entry point
 * Description:pinter to string
 * @s: it is an input
 * Return: int
 */
int is_palindrome(char *s);
int check(int *s, int start, int end, int mode);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - Entry point
 * Description:pinter to string
 * @s: it is an input
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}


/**
 * check - Entry point
 * Description:pinter to string
 * @s: it is an input
 * @start: it is an input
 * @end: it is an input
 * @mode: it is an input
 * Return: int
 */

int check(int *s, int start, int end, int mode)
{
	if ((start == end && mode != 0) || (start == end + 1 && mode == 0))
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mode);
	}
}


