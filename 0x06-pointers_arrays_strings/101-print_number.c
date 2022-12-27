#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * func - recursion func to print integers
 * @n: func input
 * Return: void
 */

void func(unsigned int n)
{
	if (n == 0)
	{
		return;
	}
	func(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_number - func to call func when n != 0
 * @n: func input
 * Return: void
 */

void print_number(int n)
{
	unsigned int d;

	if  (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		d = labs(n);
		_putchar('-');
		func(d);
	}
	else
		func(n);
}
