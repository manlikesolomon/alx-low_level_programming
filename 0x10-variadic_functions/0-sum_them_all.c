#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments to sum
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
