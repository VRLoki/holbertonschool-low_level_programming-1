#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: (0) success
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
