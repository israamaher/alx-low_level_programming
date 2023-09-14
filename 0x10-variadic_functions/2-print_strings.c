#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints a string
 * @separator: seperator char
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list pt;


	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pt, char *);
		if (i == 0)
			printf("%s", str);
		else
		{
			printf("%s", separator);
			printf("%s", str);
		}
	}
	va_end(pt);
	printf("\n");
}
