#include <stdio.h>
#include "main.h"

/**
 * _isupper - input for c
 *
 *@c: letter
 *
 * Return:  if c uppercase Return 1
 * else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
