#include <string.h>
#include "main.h"
/**
 * puts_half - prints half characters of a string
 * @str: takes address of input
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int len;
	int lent;

	len = strlen(str);
	if (len % 2 == 0)
		lent = len / 2;
	else
		lent = ((len - 1) / 2) + 1;
	for (i = lent; i  < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
