#include "main.h"

/**
 * reverse_array - reverses integers
 * @a: takes address as input
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int d[200]
	int j;

	j = 0;
	for (i = n - 1; i >= 0; i--)
	{
		d[j] = *(a + i);
		j++;
	}
	for (i = 0; i < n; i++)
	{
		*(a + i) = d[i];
	}
}
