#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @str: string
 * Return: string capitalized
 */
char *leet(char *str)
{
	int i, j;
	char a[] =  {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[] = {4, 3, 0, 7, 1};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j / 2];
			}
		}
	}

	return (str);
}
