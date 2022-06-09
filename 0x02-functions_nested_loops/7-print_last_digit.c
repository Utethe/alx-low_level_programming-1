#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @c: number to use
 * Return: last digit c
 */
int print_last_digit(int c)
{
	int l;
	int b;

	b = abs(c);
	l = b % 10;
	l = abs(l);
	_putchar(l + '0');
	return (l);
}
