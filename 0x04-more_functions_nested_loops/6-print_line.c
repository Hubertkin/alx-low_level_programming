#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line per input number
 * @n: input of func
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
