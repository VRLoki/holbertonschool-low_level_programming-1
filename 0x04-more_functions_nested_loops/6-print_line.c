#include "main.h"

/**
 * print_line - draw a straight line in terminal
 */
void print_line(int n)
{
	int cn;

	for (cn = 0; cn < n; cn++)
		_putchar('_');

	_putchar('\n');

}
