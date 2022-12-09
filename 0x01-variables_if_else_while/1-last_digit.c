#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n;
	int Ldgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Ldgt = n % 10;
	printf("Last digit of %d is ", n);
	if (Ldgt > 5)
		printf("%d and is greater than 5\n", Ldgt);
	else if (Ldgt == 0)
		printf("%d and is 0\n", Ldgt);
	else
		printf("%d and is less than 6 and not 0\n", Ldgt);
	return (0);
}
