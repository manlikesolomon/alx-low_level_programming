#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two arguments
 * @argc: argument count
 * @argv: array of values
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atio(argv[1]) * atio(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}

