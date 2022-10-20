#include "main.h"
/**
 * _isdigit - checks if the input is a single digit
 * @c: int type number
 * Return: 1 for true, 0 for false
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
