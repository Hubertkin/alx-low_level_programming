#include <ctype.h>
#include "main.h"

/**
 * print_sign- checks if input is +ive, -ive  or zero
 * @n: parameter for func print_sign
 * Return: 1 for is c is +ive, 0 if c is 0
 *  0 for otherwise
 */

int print_sign(int n)
{
	int k;

	if (n > 0)
	{
		_putchar('+');
		k = 1;
	} else if (n == 0)
	{
		k = 0;
		_putchar('0');
	}
	else
	{
		k = -1;
		_putchar('-');
	}
	return (k);
}
