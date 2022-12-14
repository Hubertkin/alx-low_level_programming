#include "main.h"

/**
 * times_table - computes time for 24 hrs range
 * Return: void
 */

void times_table(void)
{
	int i;
	int k;
	int j;
	int p;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		p = 0;
		for (k = 0; k < 9; k++)
		{
			p += i;
				if (p >= 10)
				{
					j = p / 10;
					_putchar(j + '0');
					j = p % 10;
					_putchar(j + '0');
				} else
					_putchar(p + '0');
			if (k != 8)
			{
				_putchar(',');
				_putchar(' ');
				if ((p + i) < 10)
					_putchar(' ');
				else
					continue;
			} else
				continue;
		}
	}
}
