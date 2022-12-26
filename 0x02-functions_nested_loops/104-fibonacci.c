#include <stdio.h>
#include "main.h"

/**
 * print_more - divides and print large values
 * @f1: first large value
 * @f2: second large value
 * Return: void
 */

void print_more(unsigned long int f1, unsigned long int f2)
{
	unsigned long int f1a;
	unsigned long int f2a;
	unsigned long int resulta;
	int f1b;
	int f2b;
	int resultb;
	int i;

	f1a = f1 % llrint(pow(10, 16));
	f1b = f1 / llrint(pow(10, 16));
	f2a = f2 % llrint(pow(10, 16));
	f2b = f2 / llrint(pow(10, 16));
	for (i = 0; i < 6; i++)
	{
		resultb = f1b + f2b;
		f1b = f2b;
		f2b = resultb;
		printf("%d", resultb);
		if (i < 3)
		{
			printf("0");
		}
		resulta = f1a + f2a;
		f1a = f2a;
		f2a = resulta;
		printf("%lu", resulta);
		if (i != 5)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * main - computes the addition of a and b input
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int f1;
	unsigned long int f2;
	unsigned long int res;
	int i;

	res = 0;
	f1 = 1;
	f2 = 2;
	printf("%llu, %llu, ", f1, f2);
	for (i = 2; i < 98; i++)
	{
		if (f1 == 7540113804746346429)
		{
			print_more(f1, f2);
			break;
		}
		res = f1 + f2;
		f1 = f2;
		f2 = res;
		printf("%llu", res);
		if (i != 97)
		{
			printf(", ");
		}
		else
			continue;
	}
	return (0);
}
