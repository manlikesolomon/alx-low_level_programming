#include <stdio.h>
/**
 * main - prints 0 to 100 with buzz fizz test
 * Return: 0 for success
 */

int main(void)
{
	int i = 1;

	for (i = 0; i <= 100; i++)
	{
		if (i != 0 && i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf(" ");
	return (0);
}
