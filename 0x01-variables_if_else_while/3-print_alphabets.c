#include <stdio.h>
/**
 * main - prints letters of the alphabet
 * Description: fuction prints letters of the alphabet
 * Return: Returns zero (0) for success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z', alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
