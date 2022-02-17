#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @str: string
 * Return: string capitalized
 */
char *cap_string(char *str)
{
	int i, j;
	char a[] =  {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

		for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (a[j] == str[i])
					if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
						str[i + 1] = str[i +1] - 32;
			}
		}

	return (str);
}
