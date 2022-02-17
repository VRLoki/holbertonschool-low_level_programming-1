#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 * Return: 0
 */
char *string_toupper(char *c)
{
	int cn;

	for (cn = 0; c[cn] != '\0'; cn++)
	{
		if (c[cn] >= 97 && c[cn] <= 122)
			c[cn] -= 32;
	}

	return (c);
}
