#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print lowercase and uppercase alphabet
 *
 * Return: (0) success
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
