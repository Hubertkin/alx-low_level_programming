#include "main.h"
#include <stdio.h>

/**
 * main - computes the addition of a and b input
 * Return: always 0 (success)
 */

int main(void)
{
	long int f1;
	long int f2;
	long int res;
	int i;
	unsigned long int sum; 

	res = 0;
	f1 = 0;
	f2 = 1;
	for (i = 2; i < 50; i++)
	{
		res = f1 + f2;
		f1 = f2;
		f2 = res;
		if (res < 4000000)
		{
			if ((res % 2) == 0)
			{
				sum += res;
			}
			else
				continue;
		}
		else
			break;
	}
	printf("%lu\n", sum);
	return (0);
}
