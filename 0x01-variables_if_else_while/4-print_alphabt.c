#include <stdio.h>
/**
 * main - prints letters with exceptions
 * Description: Prints all letters of the alphabet except q & e
 * Return: Return zero (0) for success
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
