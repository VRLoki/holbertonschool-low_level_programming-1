#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: string to print
 */
void print_rev(char *s)
{
	int a, b;

	a = 0;

	while (s[a] != '\0')
		a++;

	for (b = a - 1; b >= 0; b--)
		_putchar(s[b]);

	_putchar('\n');
}
