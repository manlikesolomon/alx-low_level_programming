#include <stdio.h>
#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: a pointer to a string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
