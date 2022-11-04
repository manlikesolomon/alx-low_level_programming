#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - sums int arrguments
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}

