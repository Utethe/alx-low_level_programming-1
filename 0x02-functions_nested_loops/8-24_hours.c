#include "main.h"

/**
 * times_table - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: last digit c
 */
void times_table(void)
{
	int n, k, l, i, x;

	x = 1;
	for (n = 0; n <= 2; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 5; l++)
			{
				for (i = 0; i <= 9; i++)
				{
					_putchar(n + '0');
					_putchar(k + '0');
					_putchar(':');
					_putchar(l + '0');
					_putchar(i + '0');
					_putchar(10);
					if (n == 2 && k == 3 && l == 5 && i == 9)
					{
						x = 0;
						break;
					}
				}
			}
			if (x == 0)
			{
				break;
			}
		}
	}
}
