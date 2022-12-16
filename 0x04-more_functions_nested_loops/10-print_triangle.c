#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle per input number
 * @size: input of func
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int k;
	int j;
	int n;

	n = size;
	for (i = 0; i < n; i++)
	{
		for (k = (n - i); k > 1; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n == 0 || n < 0)
		_putchar('\n');
}
