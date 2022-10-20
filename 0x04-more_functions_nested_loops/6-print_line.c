#include "main.h"
/**
 * print_line - prints a stright line
 * @n: int type number
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = n; x > 0; x--)
		{
			_putchar(95);
		}
	}
	_putchar('\n')
}
