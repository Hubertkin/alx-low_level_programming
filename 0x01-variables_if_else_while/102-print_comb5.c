#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				if (k == i && p == 10)
					p = j + 1;
				else
					p = 0;
				for (; p < 10; p++)
				{
					if (k == 0 && j == 0 && p == 0)
						continue;
					else
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(p + '0');
					}
					if (k + p == 18 && i == 9 && j == 8)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
