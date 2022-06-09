#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: number to use
 * Return: last digit c
 */
int print_last_digit(int c)
{
	int l;

	c = (c < 0) ? -((unsigned int)c) : (unsigned int)c;
	l = abs(c) % 10;
	_putchar(l + '0');
	return (l);
}
