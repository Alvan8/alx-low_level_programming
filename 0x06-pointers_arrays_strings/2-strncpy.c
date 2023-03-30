#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: destination string
 * @src: the source string
 * @n:input value
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
