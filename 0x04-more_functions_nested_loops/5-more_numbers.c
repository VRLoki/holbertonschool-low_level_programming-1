#include "main.h"

/**
 * more_numbers - numbers from 0 to 14 x10 times
 */
void more_numbers(void)
{
	int n;
	int cn;

	for (cn = 0; cn < 10; cn++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);

		}
		_putchar('\n');
	}
}
