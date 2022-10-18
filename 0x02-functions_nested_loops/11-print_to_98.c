#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: int type number
 * Return: void
 */

void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		printf("%d", n);
		printf(",");
		printf(" ");
	}
}
