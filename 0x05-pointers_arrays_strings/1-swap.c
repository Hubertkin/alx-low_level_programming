#include <stdio.h>

/**
 * swap_int - swaps value of addres a and b
 * @a: takes address of first input
 * @b: takes address of second input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *b;
	*b = *a;
	*a = d;
}
