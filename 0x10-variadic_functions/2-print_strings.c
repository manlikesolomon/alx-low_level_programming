#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string separator
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; n++)
	{
		if (va_arg(args, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_args(args, char*);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
