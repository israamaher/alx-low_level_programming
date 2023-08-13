#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
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
