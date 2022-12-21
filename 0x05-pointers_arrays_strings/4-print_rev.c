#include <string.h>

/**
 * print_rev - arranges string in reverse
 * @s: takes address of input
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
