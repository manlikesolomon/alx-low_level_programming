#include "main.h"
/**
 * _islower - fuching checks if a charachter is lowercase
 * @c: char type letter
 * Return: 1 for lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
