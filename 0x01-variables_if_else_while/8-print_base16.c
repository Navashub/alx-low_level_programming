#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char da;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	for (da = 'a'; da <= 'f'; da++)
		putchar(da);

	putchar('\n');

	return (0);
}
