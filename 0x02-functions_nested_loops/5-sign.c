#include "main.h"

/**
 * print_sign - determines if the input number
 * greater, equal, less than zero
 *
 * @n: the input number
 *
 * Return: 1 is greater than zero. 0 if zero.
 * -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
