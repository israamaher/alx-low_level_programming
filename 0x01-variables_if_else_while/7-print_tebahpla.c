#include <stdio.h>
/**
 * main - Smile in the mirror
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
