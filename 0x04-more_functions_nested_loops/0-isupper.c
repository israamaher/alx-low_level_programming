#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if character is lowercase.
 * @c: The character to be checked.
 * Returns 1 if c is lowercase .
 * Return: 0 otherwise
 **/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
