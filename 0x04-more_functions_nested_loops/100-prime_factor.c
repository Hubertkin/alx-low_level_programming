#include <stdio.h>
#include <math.h>

/**
 * main - computes largest prime factor of
 * 612852475143
 * Return: 0(success)
 */

int main(void)
{
	long int k;
	long int max;
	int i;

	max = 1;
	k = 612852475143;
	while (k % 2 == 0)
	{
		max = 2;
		k = k / 2;
	}
	for (i = 3; i < sqrt(k); i = i + 2)
	{
		while (k % i == 0)
		{
			max = i;
			k = k / i;
		}
	}
	if (k > 2)
		max = k;
	printf("%ld\n", max);
	return (0);
}
