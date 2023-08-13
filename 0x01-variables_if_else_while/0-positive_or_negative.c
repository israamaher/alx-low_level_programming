#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%i is positive\n", n);

	else if (n == 0)
		printf("%i is zero\n", n);

	else
		printf("%i is negative\n", n);

	return (0);
}
