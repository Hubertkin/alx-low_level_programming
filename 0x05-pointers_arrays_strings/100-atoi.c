#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * _atoi - prints integers out of strings
 * @s: takes address of input
 * Return: integers(h*v);
 */

int _atoi(char *s)
{
	int len;
	int i;
	int h;
	unsigned int v;

	v = 0;
	h = 0;
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (*(s + i) == '-')
			h++;
		else if (*(s + i) == ' ' || *(s + i) == '+')
			continue;
		else if (*(s + i) >= 65 && *(s + i) <= 121)
			continue;
		else if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			v = atoi(s + i);
			break;
		}

	}
	if (h % 2 != 0)
		h = -1;
	else
		h = 1;
	return (h * v);
}
