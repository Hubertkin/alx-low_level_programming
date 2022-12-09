#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int x;
	char cr;
	char cp;

	for  (x = 'A'; x <= 'Z'; x++)
	{
		cr = tolower(x);
		putchar(cr);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		cp = toupper(x);
		putchar(cp);
	}
	putchar('\n');
	return (0);
}
