#include <stdio.h>
/**
 * main -  prints its name, followed by a new line.
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 **/
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
