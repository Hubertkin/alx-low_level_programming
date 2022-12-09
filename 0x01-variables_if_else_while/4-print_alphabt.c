#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry poit
 " Return: always 0
 */
int main(void)
{
	int x;
	char cl;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if ( x == 'E' || x == 'Q')
			continue;
		else
		{
			cl = tolower(x);
			putchar(cl);
		}
	}
	putchar('\n');
	return (0);
}
