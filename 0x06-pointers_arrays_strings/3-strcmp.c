#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: takes address as input
 * @s2: takes address as second input
 * Return: int (dest)
 */

int _strcmp(char *s1, char *s2)
{
	int dest;

	dest = strcmp(s1, s2);
	return (dest);
}
