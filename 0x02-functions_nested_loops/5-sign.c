#include "main.h"
/**
 * print_sign -checks the sign of a integer
 * @n: int number
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1, 0, -1 for positive, zero and negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
