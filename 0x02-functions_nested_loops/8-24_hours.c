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

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
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
