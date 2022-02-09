#include "main.h"

/**
 * print_square - print a square of #
 * @size: input value for square size
 */
void print_square(int size)
{
	int cn1;
	int cn2;

	for (cn1 = 0; cn1 < size; cn1++)
	{
		for (cn2 = 0; cn2 < size; cn2++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');

}
