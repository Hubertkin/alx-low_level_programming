#include "main.h"
void hund(int);
/**
 * print_times_table - computes timestable from input
 * @n: input valude for func
 * Return: void
 */

void print_times_table(int n)
{
	int i;
	int k;
	int p;

	for (i = 0; i <= n; i++)
	{
		if (n <= 15)
		{
			_putchar('0');
			if (n == 0)
				_putchar(' ');
			else if (i > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			p = 0;
			for (k = 0; k < n; k++)
			{
				p += i;
				hund(p);
				if (k != (n - 1))
				{
					_putchar(',');
					_putchar(' ');
					if ((p + i) < 10)
					{
						_putchar(' ');
						_putchar(' ');
					} else if ((p + i) < 100 && n != 0)
					{
					_putchar(' ');
					}
					else
						continue;
				} else
					continue;
			}
			_putchar('\n');
		}
		else
			break;
	}
}

/**
 * hund - computes timestable
 * @p: input of func
 * Return: void
 */

void hund(int p)
{
	int k;
	int j;

	if (p >= 100)
	{
		k = p / 10;
		j = k / 10;
		_putchar(j + '0');
		j = k % 10;
		_putchar(j + '0');
		k = p % 10;
		_putchar(k + '0');
	} else if (p >= 10)
	{
		k = p / 10;
		_putchar(k + '0');
		j = p % 10;
		_putchar(j + '0');
	} else
		_putchar(p + '0');
}
