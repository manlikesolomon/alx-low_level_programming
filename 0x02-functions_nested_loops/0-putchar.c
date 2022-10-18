#include "main.h"
/**
 * main - prints the string _putchar
 * Description: standard libraries are not used
 * Return: returns zero (0) for success
 */

int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n')
	return (0);
}
