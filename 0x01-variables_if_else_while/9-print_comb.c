#include <stdio.h>
/**
 * main -  Patience, persistence and perspiration
 * make an unbeatable combination for success
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar('0' + i);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	return (0);
}
