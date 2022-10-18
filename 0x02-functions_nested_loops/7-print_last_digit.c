#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: int type number
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
	}

	return (nv);
}
