#include <stdio.h>
/**
 * main - prints all combinations of single digits
 * Return: 0 for success
 */

int main(void)
{
	int num = 47;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
