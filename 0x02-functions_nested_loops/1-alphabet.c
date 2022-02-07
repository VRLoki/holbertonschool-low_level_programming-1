#include "main.h"

/**
 *print_alphabet - print alphabet in lowercase
 *
 *Return: (0)
*/
int print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

	return (0);
}
