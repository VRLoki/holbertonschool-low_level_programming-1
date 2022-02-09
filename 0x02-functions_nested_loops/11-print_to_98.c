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

	if (cn == 98)
	{
		printf(98);

		for (cn = n; cn < 98; cn++)
		{
			putchar(cn);
		}

		for (cn = n; cn > 98; cn++)
		{
		putchar(cn);
		printf(", ");
		}
	}
}
