#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: char to be printed
 * Return: on successs 1
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
