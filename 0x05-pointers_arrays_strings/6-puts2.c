#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: takes address of input
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i  < len; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
