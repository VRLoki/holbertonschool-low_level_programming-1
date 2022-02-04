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
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, l);
	}
	else if (l < 6 && !0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, l);
	}
	else
	{
		printf("Last digit of %i is %i and is 0", n, l);
	}

	return (0);
}
