#include <stdio.h>
/**
 * main - Hexadecimal
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	int i;
	char alph;

	for (i = 0 ; i <= 9 ; i++)
		putchar('0' + i);
	for (alph = 'a' ; alph <= 'f' ; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
