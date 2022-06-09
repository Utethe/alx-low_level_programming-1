#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: number to use
 * Return: last digit c
 */
int print_last_digit(int c)
{
	unsigned int l;

	unsigned int b = (unsigned int)c;
	l = b % 10;
	_putchar(l + '0');
	return (l);
}
