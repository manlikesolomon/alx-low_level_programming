#include "main.h"
/**
 * is_prime_number - returns 1 for prime numbers
 * @n: int type number
 * Return: 1 for prime 0 for non-prime
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @resp: int
 * Return: int
 */

int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
	{
		return (1);
	}
	else if (n % resp == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, resp + 1));
	}
}
