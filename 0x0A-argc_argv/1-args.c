#include <stdio.h>
/**
 * main - prints argument count
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
