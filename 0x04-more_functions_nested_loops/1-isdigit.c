#include "main.h"

/**
 * _isdigit - the input of c
 *
 *@c: the input digit
 *
 * Return: 1 if c is equal to 0..9, else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
