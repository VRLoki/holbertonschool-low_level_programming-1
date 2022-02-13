#include "main.h"
#include <stdio.h>

/**
 * print_array - print n numbers of an array of integers
 * @a: string
 * @n: number of integers in the array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

