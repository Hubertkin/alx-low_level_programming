#include "main.h"
#include <stdio.h>
int add3(void);
int add5(void);
/**
 * main - computes the sum of func add3 + add5
 * Return: always zero (success)
 */

int main(void)
{
	long int res;

	res = (add3() + add5());
	printf("%ld", res);i
	return (0);
}

/**
 * add5 - computes sum of multiples of 5 less than 1024
 * Return: total sum (sum)
 */

int add5(void)
{
	int i;
	int d5;
	int sum;

	d5 = 0;
	sum = 0;
	for (i = 0; i < 204; i++)
	{
		d5 += 5;
		sum += d5;
	}
	return (sum);
}

/**
 * add3 - computes sum of multipls of 3 less than 1024
 * Return: total sum (sum)
 */

int add3(void)
{
	int i;
	int d3;
	int sum;

	d3 = 0;
	sum = 0;
	for (i = 0; i < 341; i++)
	{
		d3 += 3;
		sum += d3;
	}
	return (sum);
}
