#include "main.h"
/**
 * helper - does it for me
 * @i: helper int
 * @n: integer I'm testing
 * Return: value
 */
int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);

}
/**
 * is_prime_number - is prime number
 * @n : integer
 * Return:1 if is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));

}
