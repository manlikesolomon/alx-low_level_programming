#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @n: int type number
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
