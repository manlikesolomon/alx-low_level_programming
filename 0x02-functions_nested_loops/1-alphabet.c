#include "main.h"
/**
 * print_alphabet - prints letters of the alphabet
 * Description: prints letters of the alphabet
 * Return: 0 for success
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
