#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - computes last digit of input
 * @c: parameter for func
 * Return: last value of input
 */

int print_last_digit(int c)
{
	int i;
	int k;

	i = c % 10;
	if (i >= 0)
	{
		k = i;
		_putchar(i + '0');
	} else
	{
		k = -1 * i;
		_putchar(k + '0');
	}
	return (k);
}

