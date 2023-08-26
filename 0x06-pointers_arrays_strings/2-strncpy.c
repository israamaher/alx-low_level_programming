#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest : pointer of string
 * @src : poniter of string
 * @n : number
 * Return: poniter of result of copy
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
