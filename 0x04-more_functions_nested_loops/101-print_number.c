#include "main.h"
#include <stdio.h>

/**
 * func - recursion func to print integers
 * @n: func input
 * Return: void
 */

void func(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
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
	if  (n == 0)
		_putchar(48);
	else
		func(n);
}
