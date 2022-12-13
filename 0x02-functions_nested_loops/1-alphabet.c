#include <main.h>

/**
 * main - Entry point, prints alphabet in lowercase
 * Return: always nothing (void)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
}
