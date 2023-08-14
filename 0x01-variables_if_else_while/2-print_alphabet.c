#include <stdio.h>
/**
 * main - I sometimes suffer from insomnia. And when I can't fall asleep,
 *  I play what I call the alphabet game
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
