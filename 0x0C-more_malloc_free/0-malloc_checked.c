#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - checks malloc
 * @b: integer to check?
 * Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
