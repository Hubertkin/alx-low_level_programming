#include "main.h"

/**
 * jack_bauer - computes time for 24 hrs range
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int k;
	int j;
	int p;
	int n;

	for (i = 0; i < 3; i++)
	{
		if (i < 2)
			n = 10;
		else
			n = 4;
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < 6; j++)
			{
				for (p = 0; p < 10; p++)
				{
					_putchar(i + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(p + '0');
					_putchar('\n');
				}
			}
		}
	}
}
