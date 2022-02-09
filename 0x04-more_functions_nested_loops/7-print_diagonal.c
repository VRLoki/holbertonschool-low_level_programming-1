#include "main.h"

/**
 * print_diagonal - draw diagonal line on terminal
 * @n: input number of \
 */
void print_diagonal(int n)
{
	int cn1;
	int cn2;

	for (cn1 = 0; cn1 < n; cn1++)
	{
		for (cn2 = 0; cn2 < cn1; cn2++)
			_putchar(' ');

		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
