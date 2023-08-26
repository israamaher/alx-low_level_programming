#include  "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a : array of number
 * @n :  is the number of elements of the array
 **/
void reverse_array(int *a, int n)
{
	int i, tmp;

	tmp = 0;
	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
