#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 * Return:  0
*/
int main(void)
{
	int n, k, l 10[;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; ++k)
		{
			for (l = 0; l <= 9; ++l)
			{
				for (i = 0; i <= 9; ++i)
					   r(k + '0');
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
