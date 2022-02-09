#include "main.h"

/**
 *print_alphabet_x10 - print alphabet in lowercase x10
 */
void print_alphabet_x10(void)
{
	char alpha;
	int times;

	for (times = 0; times < 10; times++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);

		}
		_putchar('\n');
	}
}
