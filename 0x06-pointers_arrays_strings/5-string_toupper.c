#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: array
 * Return: 0
 */
char *string_toupper(char *)
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
