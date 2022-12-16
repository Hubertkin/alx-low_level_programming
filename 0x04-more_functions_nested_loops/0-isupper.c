#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: input for func
 * Return: 0 for otherwise, 1 for uppercase
 */

int _isupper(int c)
{
	int res;

	res = 0;
	if (isupper(c))
		res = 1;
	else
		res = 0;
	return (res);
}
