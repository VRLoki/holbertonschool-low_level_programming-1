#include "main.h"

/**
 * _strcpy - copies a string to another by pointers
 * @dest: destination string
 * @str: base string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int size = 1;

	while (src[a] != '\0')
		size++;

	for (a = 0; size; a++)
		src[a] = dest[a];

	return (dest);
}
