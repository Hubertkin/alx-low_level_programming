#include <string.h>

/**
 * rev_string - arranges string in reverse
 * @s: takes address of input
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char d[strlen(s)];
	int len;
	int j;

	j = 0;
	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		d[j] = *(s + i);
		j++;
	}
	for (i = 0; i < len; i++)
	{
		*(s + i) = d[i];
	}
}
