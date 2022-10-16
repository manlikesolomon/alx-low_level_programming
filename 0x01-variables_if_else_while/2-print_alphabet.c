#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Description: Prints letters of the aplhabet (a to z)
 * Return: Returns zero for success
 */

int main (void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z', alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
