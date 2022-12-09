#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char te;

	for (te = 'z'; te >= 'a'; te--)
		putchar(te);

	putchar('\n');

	return (0);
}
