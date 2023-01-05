#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
