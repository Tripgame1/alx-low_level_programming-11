#include "main.h"

/**
 * _islower - shows 1 if the output is a
 * lowercase character. Another cses, shows
 * 0
 * @c: the character letter
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
			return (0);
		}
	_putchar('\n');
}
