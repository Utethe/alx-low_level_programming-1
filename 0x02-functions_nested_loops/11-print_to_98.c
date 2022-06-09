#include <stdbool.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: start of numbers
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i / 10) 
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			if (i == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		int d, e;

		for (d = n; d >= 98; d--)
		{
			e = d / 10;
			if (e / 10) 
			{
			_putchar(e / 10 + '0');
			}
			_putchar(e % 10 + '0');
			_putchar(d % 10 + '0');
			if (d == 98)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
