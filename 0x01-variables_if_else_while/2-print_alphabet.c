#include <stdio.h>

/**
 * main - print alhabets in lowercase
 *
 * Return: Always 0
 */
main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar("\n");

	return (0);
}
