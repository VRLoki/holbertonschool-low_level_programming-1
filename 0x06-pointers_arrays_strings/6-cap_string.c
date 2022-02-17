#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @str: string
 * Return: string capitalized
 */
char *string_toupper(char *str)
{
	int a = 0, b;
	char arr[] = " \t\n,;.!?\"(){}";

	while (*(str + a))
	{
		if (*(str + a) >= 'a' && *(str + a) <= 'z')
		{
			if (a == 0)
				*(str + a) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (arr[b] == *(str + a - 1))
						*(str + a) -= 'a' - 'A';
				}
			}
		}
		a++;
	}

	return (c);
}
