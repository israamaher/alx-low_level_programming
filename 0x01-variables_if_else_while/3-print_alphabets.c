#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - alphABET
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
