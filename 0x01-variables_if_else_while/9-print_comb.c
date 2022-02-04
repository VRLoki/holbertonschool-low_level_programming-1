#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Patience, persistence and perspiration make an
 * unbeatable combination for success
 *
 * Return: (0) success
 */
int main(void)
{
	int n;
	int all = 9;
	int ascii;

	for (n = 0; n <= all; n++)
	{
		ascii = n + 48;
		putchar(ascii);

			if (n < all)
			{
				putchar(',');
				putchar(' ');
			}
	}

	putchar('\n');

	return (0);
}
