#include "main.h"
/**
 * _memset - fills an array with a contant value
 * @s: array to fill
 * @b: contant value
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
