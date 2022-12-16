#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line per input number
 * @n: input of func
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < i; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n == 0 || n < 0)
		_putchar('\n');
}
