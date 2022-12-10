#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char x;
	char cp;

	for  (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (cp = 'a'; cp <= 'f'; cp++)
	{
		putchar(cp);
	}
	putchar('\n');
	return (0);
}
