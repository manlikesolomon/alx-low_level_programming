#include "main.h"
/**
 * _isalpha - checks if input is an aplhabet
 * @c: char type
 * Return: 1 for alphabet and 0 for others
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
