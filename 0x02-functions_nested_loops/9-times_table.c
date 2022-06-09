#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
	int n, k, p;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			p = n * k;
			if (p / 10)
			{
				_putchar(p / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			p = p % 10;
			_putchar(p + '0');
			if (k == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
