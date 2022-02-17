#include "main.h"

/**
 * leet - switch letters for numbers
 * @str: string
 * Return: string switched
 */
char *leet(char *str)
{
	int i, j;
	char a[] =  {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] < 13; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j / 2];
			}
		}
	}

	return (str);
}
