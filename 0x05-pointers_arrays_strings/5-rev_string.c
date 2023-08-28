#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string, in reverse
 * @s : string
 **/
void rev_string(char *s)
{
	int i, len, len1;
	char tmp;

	len = strlen(s);
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
