#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: seperator char
 * @n: const var
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(num, int));
		else
		{
			printf("%s", separator);
			printf("%d", va_arg(num, int));
		}
	}
	va_end(num);
	printf("\n");
}
