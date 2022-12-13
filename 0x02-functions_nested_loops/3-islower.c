#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if input is lowercase
 * @c: parameter for func _islower
 * Return: 1 for lowercase, 0 for otherwise
 */

int _islower(int c)
{
	int i;
	int k;

	i = islower(c);
	if (i != 0)
		k = 1;
	else
		k = 0;
	return (k);
}

