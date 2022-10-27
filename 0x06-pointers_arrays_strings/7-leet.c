#include <stdio.h>
/**
 * leet - Encodes a string in leet
 * @str: String to be encoded
 * Return: encoded character
 */

char *leet(char *str)
{
	int i, j, k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				k = j;
				str[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
