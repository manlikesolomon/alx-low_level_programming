#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
