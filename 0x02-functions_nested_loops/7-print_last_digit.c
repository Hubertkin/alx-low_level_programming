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

	if (isdigit(c))
	{
		i = c % 10;
		_putchar(i + '0');
	} else
	{
		i = toascii(c) % 10;
		_putchar(i + '0);
	}
	return (i);
}

