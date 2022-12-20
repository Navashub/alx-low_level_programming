#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts string to integer
 * @s: char array string
 * Description: Number in string can be precede by an infinite
 * number of characters
 * Take into account all -/+ signs before the number
 * If there is no numbers, return 0
 * No need to check for overflow
 * Return: first integer found in the string
 */

int _atoi(char *s)
{
	int i;
	int h, p;

	h = 0;
	p = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;
		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
