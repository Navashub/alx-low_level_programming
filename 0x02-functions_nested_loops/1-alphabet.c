#include "main.h"

/**
 * main - print_alphabet - prints the alpha in lowercase
 */
void print_alphabet(void);
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');

	return (0);
}
