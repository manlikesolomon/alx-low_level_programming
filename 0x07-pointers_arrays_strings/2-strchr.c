#include "main.h"
/**
 * _strchr - serches for a char in an array
 * @s: array to search
 * @c: char to search for
 * Return: pointer first occurance of c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
