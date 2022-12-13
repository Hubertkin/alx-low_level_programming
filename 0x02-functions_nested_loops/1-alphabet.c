#include "main.h"

/**
 * print_alphabet - Entry point, prints alphabet in lowercase
 * Return: always nothing (void)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
