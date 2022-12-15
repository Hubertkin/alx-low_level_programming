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

	res = 0;
	f1 = 1;
	f2 = 2;
	printf("%ld, %ld, ", f1, f2);
	for (i = 2; i < 50; i++)
	{
		res = f1 + f2;
		f1 = f2;
		f2 = res;
		printf("%ld", res);
		if (i != 49)
		{
			printf(", ");
		}
		else
			continue;
	}
	printf("\n");
	return (0);
}
