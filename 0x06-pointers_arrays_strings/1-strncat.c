#include "main.h"

/**
 * _strncat - concatenates to strings
 * @dest: takes address as input
 * @src: takes address as second input
 * @n: bytes of src to concatenate
 * Return: char (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
