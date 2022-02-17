#include "main.h"

/**
 * leet - switch letters for numbers
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	int i, j;
	char a[] =  {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '3', '0', '7', '1'};

	i = 0;
	switch(i)
	  {
	  case '0':
	    i++;
	  }
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[(j / 2)];
			}
		}
	}

	return (str);
}
