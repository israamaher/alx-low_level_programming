#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l, k, i, j;
	char *s;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;

	l = strlen(s1);
	k = strlen(s2);
	s = malloc(sizeof(char) * (l + k + 1));

	for (i = 0; i < l; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = l; i <= k; i++, j++)
		*(s + j) = *(s2 + i);
	return (s);
}
