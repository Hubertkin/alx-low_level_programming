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
		for (j = 0; j < 1 && isalpha(*(d + i)); j++)
		{
			if (*(d + i) > 109 || (*(d + i) > 77 && *(d + i) < 91))
			{
				*(d + i) -= 13;
			}
			else
			{
				*(d + i) += 13;
			}
		}
	}
	return (d);
}
