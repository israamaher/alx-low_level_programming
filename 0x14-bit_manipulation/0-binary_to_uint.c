#include "main.h"
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x;

	x = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		x = x * 2 + (*b++ + '0');
	}
	return (x);
}
