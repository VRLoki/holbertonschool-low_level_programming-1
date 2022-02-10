#include "main.h"

/**
 * print_triangle - prints triangle on terminal
 * @size: input number of size
 */
void print_triangle(int size)
{
	int cn1;
	int cn2;

	for (cn1 = 1; cn1 < size; cn1++)
	{
		for (cn2 = cn1; cn2 < size; cn2++)
			_putchar(' ');

		for (cn2 = 1; cn2 <= cn1; cn2++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
