#include "main.h"
#include <ctype.h>

/**
 * rot13 - ROT13 encoding
 * @d: takes address as input
 * Return: char (d)
 */

char *rot13(char *d)
{
	int i;
	int j;
	int len;

	len = strlen(d);
	for (i = 0; i < len; i++)
	{
		for (j = 0; isalpha(*(d + i)) && j < 1 && (*(d + i) > 109 || (*(d + i) > 77 && *(d + i) < 91)); j++)
		{
			*(d + i) -= 13;
			p = 1;
			continue;
		}
		if (isalpha(*(d + i)) && (p != 1) && (*(d + i) <= 109 || (*(d + i) <= 77 && *(d + i) >= 65)))
		{
			*(d + i) += 13;
		}
		p = 0;
	}
	return (d);
}
