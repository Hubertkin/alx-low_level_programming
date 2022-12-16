#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: input for func
 * Return: 0 for otherwise, 1 for digit
 */

int _isdigit(int c)
{
	int res;

	res = 0;
	if (isdigit(c))
		res = 1;
	else
		res = 0;
	return (res);
}
