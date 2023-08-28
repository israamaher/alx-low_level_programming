#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 *
 * @a : an array of integers
 * @n : elements of an array of integers
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
		if (i < n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
	printf("\n");
}
