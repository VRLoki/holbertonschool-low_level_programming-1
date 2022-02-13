#include "main.h"

/**
 * rev_string - reverses order of string
 * @s: string to print
 */
void rev_string(char *s)
{
	int a, b = 0;
	char rev;

	while (s[b] != '\0')
		b++;

	b = b - 1;

	for (a = 0; a < b; b--, a++)
	{
		rev = s[a];
		s[a] = s[b];
		s[b] = rev;
	}
}
