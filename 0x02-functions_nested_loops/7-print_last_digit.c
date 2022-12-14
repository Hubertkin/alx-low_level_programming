#include "main.h"

/**
 * print_last_digit - computes last digit of input
 * @c: parameter for func
 * Return: last value of input
 */

int print_last_digit(int c)
{
	int i;

	i = c % 10;
	_putchar(i);
	return (i);
}

