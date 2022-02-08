#include "main.h"

/**
 *print_last_digit - computes the absolute value of an integer
 * @n: num to check
 * Return: the absolute value of int
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
		return (-n % 10);

	_putchar('\n');

}
