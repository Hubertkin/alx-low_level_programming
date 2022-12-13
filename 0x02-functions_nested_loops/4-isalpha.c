#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if input is lowercase or uppercase
 * @c: parameter for func _isalpha
 * Return: 1 for lowercase or uppercase, 0 for otherwise
 */

int _isalpha(int c)
{
	int i;
	int k;

	i = isalpha(c);
	if (i != 0)
		k = 1;
	else
		k = 0;
	return (k);
}

