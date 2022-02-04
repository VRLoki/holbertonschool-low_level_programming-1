#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print alphabet without q and e
 *
 * Return: (0) success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
	}

	putchar('\n');

	return (0);
}
