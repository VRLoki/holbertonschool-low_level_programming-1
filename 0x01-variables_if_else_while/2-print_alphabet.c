#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The last digit
 *
 * Return: (0) success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
