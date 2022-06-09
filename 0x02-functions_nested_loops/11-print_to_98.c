#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: start of numbers
 * Return: void
 */
void print_to_98(int n)
{
	int i, f, k;

	i = n;
	while (i != 98)
	{
		k = i;
		if (i < 0)
		{
			_putchar('-');
			k = abs(i);
		}
		f = k / 10;
		if (f / 10)
		{
			_putchar(f / 10 + '0');
		}
		if (f)
		{
			_putchar(f % 10 + '0');
			_putchar(k % 10 + '0');
		}
		else
		{
			_putchar(k + '0');
		}
		if (i > 0 && k == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			i--;
		}
		else
		{
			i++;
		}
	}
	if (i == 98)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
