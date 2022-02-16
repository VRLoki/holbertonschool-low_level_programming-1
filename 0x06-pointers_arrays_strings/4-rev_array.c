#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int cn, rev, aux;
	rev = n - 1;

	for (cn = 0; cn <= rev; cn++, rev--)
	{
		aux = a[rev];
		a[rev] = a[cn];
		a[cn] = aux;
	}
}
