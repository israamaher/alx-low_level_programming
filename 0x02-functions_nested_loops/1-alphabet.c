#include "main.h"
/**
 * print_alphabet - I sometimes suffer from insomnia.
 *  And when I can't fall asleep,
 *  I play what I call the alphabet game
 * this program is compiled on.
 * Return: 0 if success.
 **/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
