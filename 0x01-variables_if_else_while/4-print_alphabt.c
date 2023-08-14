#include <stdio.h>
/**
 * main - When I was having that alphabet soup,
 * I never thought that it would pay off
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
		else
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
