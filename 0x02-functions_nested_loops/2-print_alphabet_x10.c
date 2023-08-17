#include "main.h"
/**
 * print_alphabet_x10 - I sometimes suffer from insomnia.
 *  And when I can't fall asleep,
 *  I play what I call the alphabet game
 * this program is compiled on.
 * Return: 0 if success.
 **/
void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 0 ; i < 10; i++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);	
			_putchar("\n");
		}
	}
}
