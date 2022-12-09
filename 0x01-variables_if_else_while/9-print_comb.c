#include <stdio.h>

/**
 * main -  prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 28; n <= 38; n++)
	{
		putchar(n);
		if (n != 37)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
}
