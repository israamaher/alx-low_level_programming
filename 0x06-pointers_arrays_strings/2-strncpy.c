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

	for (c = 0; c < n && c != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (c = 0; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
