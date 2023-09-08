#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i, *t, j;

	j = max - min + 1;
	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * j);

	if (t == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
		t[i] = min++;
	return (t);
}
