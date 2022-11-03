#include "main.h"
/**
 * factorial - calculates factorial of an int
 * @n: int type number
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n + factorial(n - 1));
}
