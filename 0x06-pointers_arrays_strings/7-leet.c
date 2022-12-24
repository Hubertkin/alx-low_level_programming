#include "main.h"

/**
 * leet - 1337 encoding
 * @d: takes address as input
 * Return: char (d)
 */

char *leet(char *d)
{
	int i;
	char a[10] = "aAeEoOtTlL";
	char h[10] = "4433007711";
	int j;
	int len;

	len = strlen(d);
	for (j = 0; j < len; j++)
	{
		for (i = 0; i < 10; i++)
		{
			if (*(d + j) == a[i])
			{
				*(d + j) = h[i];
			}
		}
	}
	return (d);
}
