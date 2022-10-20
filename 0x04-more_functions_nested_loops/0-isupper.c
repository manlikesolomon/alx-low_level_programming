#include "main.h"
/**
 * _isupper - checks if a character is uppercase
 * @c: int type number
 * Return: 1 for true 0 for false
 */

int _isupper(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	return (0);
}
