#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: character seperator
 * @n: number of numbers to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), i != (n - 1) ? separator : "");
	}
	va_end(args);

	printf("\n");
}
