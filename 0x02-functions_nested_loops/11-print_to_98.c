#include "main.h"
void increment(int n);
void decrement(int n);
void hund(int n);
/**
 * print_to_98 - computes natural numbers from input to 98
 * Return: void
 * @n: input value from func call
 */

void print_to_98(int n)
{
	if (n < 98)
		increment(n);
	else
		decrement(n);
	_putchar('\n');
}

/**
 * increment - computes natural nums in increasing order
 * @n: input value of func
 * Return: void
 */

void increment(int n)
{
	int i;
	int k;

	for (i = n; i < 99; i++)
	{
		if (i < 0 && i < -99)
		{
			hund(i);
		} else if (i < 0 && i < -9)
		{
			k = -1 * (i / 10);
			_putchar('-');
			_putchar(k + '0');
			k = -1 * (i % 10);
			_putchar(k + '0');
		} else if (i < 0)
		{
			_putchar('-');
			k = -1 * i;
			_putchar(k + '0');
		} else if (i > 9)
		{
			k = i / 10;
			_putchar(k + '0');
			k = i % 10;
			_putchar(k + '0');
		} else
			_putchar(i + '0');
		if (i == 99 || i == 98)
			continue;
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * decrement - computes natural numbers in decreasing order
 * @n: input value of func call
 * Return: void
 */

void decrement(int n)
{
	int i;
	int k;
	int j;
	int p;

	for (i = n; i > 97; i--)
	{
		if (i > 99)
		{
			k = i / 10;
			j = k / 10;
			_putchar(j + '0');
			p = k % 10;
			_putchar(p + '0');
			k = i % 10;
			_putchar(k + '0');
		} else
		{
			k = i / 10;
			_putchar(k + '0');
			k = i % 10;
			_putchar(k + '0');
		}
		if (i == 98 || i == 97)
			continue;
		else
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * hund - computes natural nums for negative 100th
 * @n: input for func
 * Return: void
 */

void hund(int n)
{
	int k;
	int j;

	k = -1 * (n / 10);
	_putchar('-');
	j = k / 10;
	_putchar(j + '0');
	j = k % 10;
	_putchar(j + '0');
	j = -1 * (n % 10);
	_putchar(j + '0');
}
