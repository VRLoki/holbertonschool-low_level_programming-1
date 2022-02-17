#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] = str[n] - 32;
	}

	return (c);
}
