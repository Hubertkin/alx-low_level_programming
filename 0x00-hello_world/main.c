#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a = 0 && 1 || 1;
	int b = 0 && (1 || 1);
	int c = (0 && 1) ||1;
	printf("%d, %d, %d", a, b, c);
	return (0);
}
