#include "main.h"

/**
 * _strcpy - copies a string to another by pointers
 * @dest: destination string
 * @str: base string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int size = 0;

	while (src[size] != '\0')
		size++;

	for (a = 0; a <= size; a++)
		src[a] = dest[a];

	return (dest);
}
