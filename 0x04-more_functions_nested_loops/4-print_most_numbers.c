#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + a);
		}
	}

	_putchar('\n');
}
