#include "main.h"
#include <stdio.h>

/**
 * findSum - print sum of all multiples of 3 and 5 below 1024
 * @n: max number
 * @a: multiples of 3
 * @b: multiples of 5
 * Return: value of sum
 */
int findSum(int n, int a, int b)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		if (i % a == 0 || i % b == 0)
			sum += i;

	return (sum);
}

int main(void)
{
	int n = 1024, a = 3, b = 5;

	printf("%d", findSum(n, a, b));

	return (0);
}
