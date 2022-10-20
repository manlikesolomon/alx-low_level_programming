#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int c = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}
	i++;
	}
	_putchar('\n');
}
