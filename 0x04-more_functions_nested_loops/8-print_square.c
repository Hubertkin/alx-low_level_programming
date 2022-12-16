#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square per input number
 * @size: input of func
 * Return: void
 */
void print_square(int size)
{
	int i;
	int k;
	int n;

	n = size;
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n == 0 || n < 0)
		_putchar('\n');
}
