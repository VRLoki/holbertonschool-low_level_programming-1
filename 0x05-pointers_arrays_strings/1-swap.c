#include "main.h"

/**
 * swap_int - takes a pointer to an int as parameter and
 * updates the value it points to 98
 * @a: variable to point 1
 * @b: variable to point 2
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
