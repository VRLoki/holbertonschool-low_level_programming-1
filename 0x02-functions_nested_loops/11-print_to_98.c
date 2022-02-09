#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: input number
 * Return: value of n
 */
void print_to_98(int n)
{
	int cn;
	int fin = 98;

	if (n < fin)
	{
		for (cn = n; cn < fin; cn++)
		{
			printf("%i, ", cn);
		}
	}

	else if	(n > fin)
	{
		for (cn = n; cn > fin; cn--)
		{
			printf("%i, ", cn);
		}
	}

	if (n == 98 || cn == 98)
	{
		printf("98\n");
	}
}
