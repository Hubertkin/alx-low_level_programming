#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints nums from 0 - 14
 * ten times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int k;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k < 10)
				j = k;
			else
			{
				j = k / 10;
				_putchar(j + '0');
				j = k % 10;
			}
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
