#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 * Return:  0
*/
int main(void)
{
	int n, k, l;

	for (n = 0; n <= 9; n++)
	{
		for (k = n + 1; k <= 9; ++k)
		{
			for (l = k + 1; l <= 9; ++l)
			{
				putchar(n + '0');
				putchar(k + '0');
				putchar(l + '0');
				if (n == 7 && k == 8 && l == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
