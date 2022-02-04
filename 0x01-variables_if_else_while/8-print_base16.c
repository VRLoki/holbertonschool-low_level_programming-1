#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print in Hexadecimal
 *
 * Return: (0) success
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
		for (a = 'a'; a <= 'f'; a++)
		{
			putchar(a);
		}

	putchar('\n');

	return (0);
}
