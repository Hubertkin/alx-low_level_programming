#include "main.h"

/**
 * _strcat - concatenates to strings
 * @dest: takes address as input
 * @src: takes address as second input
 * @n: bytes of src to concatenate
 * Return: char (dest)
 */

char *_stnrcat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
