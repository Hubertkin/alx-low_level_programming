#include "main.h"

/**
 * _strncpy - copy's to replace strings
 * @dest: takes address as input
 * @src: takes address as second input
 * @n: bytes of src to copy
 * Return: char (dest)
 */

char *_stnrcpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
