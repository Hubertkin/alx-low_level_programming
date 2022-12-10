#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		if (x <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
