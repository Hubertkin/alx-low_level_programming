#include <string.h>
#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: takes address of input
 * @src:takes address of input
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
