#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Positive anything is better than negative nothing
 * this program is compiled on.
 * Return: 0 if success.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);

	else if (i == 0)
		printf("%i is zero\n", i);

	else
		printf("%i is negative\n", i);
}
