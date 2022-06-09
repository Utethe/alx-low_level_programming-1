#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @c: character to test
 * Return: 1 for +, 0 for 0, -1 for -
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
