#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int x;
	char cr;

	for (x = 'A'; x <= 'Z'; x++)
{
	cr = tolower(x);
	putchar(cr);
}
	putchar('\n');
	return (0);
}
