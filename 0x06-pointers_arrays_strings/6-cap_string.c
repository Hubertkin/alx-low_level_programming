#include "main.h"
#include <ctype.h>

/**
 * cap_string - changes to uppercase
 * @d: takes address as input
 * Return: char (d)
 */

char *cap_string(char *d)
{
	int i;
	char a[13] = "\n\t ,;.!?\"(){}";
	int j;
	int len;

	len = strlen(d);
	for (j = 0; j < len; j++)
	{
		for (i = 0; i < 13; i++)
		{
			if (*(d + j) == a[i] && j != len - 1)
			{
				*(d + j + 1) = toupper(*(d + j + 1));
			}
		}
	}
	return (d);
}
