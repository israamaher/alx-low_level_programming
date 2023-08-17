#include "main.h"
#include <ctype.h>
/**
 * _islower - check if character is lowercase.
 * @c: The character to be checked.
 * Returns 1 if c is lowercase .
 * Return: 0 otherwise
 **/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
