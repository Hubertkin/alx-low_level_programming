#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes to uppercase
 * @s: takes address as input
 * Return: char (s)
 */

char *string_toupper(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		*(s + i) = toupper(*(s + i));
	}
	return (s);
}
