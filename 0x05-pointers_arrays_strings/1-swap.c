#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
