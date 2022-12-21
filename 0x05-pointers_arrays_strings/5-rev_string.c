#include <string.h>
#include <publib.h>

/**
 * rev_string - arranges string in reverse
 * @s: takes address of input
 * Return: void
 */

void rev_string(char *s)
{
	*s = strrev(s);
}
