#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum all args
 * @n: integers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list argsum;

	if (n == 0)
		return (0);
	va_start(argsum, n);
	sum = 0;
	for (i = 0; i <  n; i++)
		sum += va_arg(argsum, int);
	va_end(argsum);
	return (sum);
}
