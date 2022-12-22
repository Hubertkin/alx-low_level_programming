#include <string.h>
#include "main.h"
/**
 * print_array - prints n characters of an array
 * @a: takes address of input
 * @n: number of charcters to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i  < n; i++)
	{
		if (i + 1 == n)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
	_putchar('\n');
}
