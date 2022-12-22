#include "main.h"

/**
 * _strcat - concatenates to strings
 * @dest: takes address as input
 * @src: takes address as second input
 * Return: char (dest)
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
