#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 * Return:  0
*/
int main(void)
{
	int n, k, l, i;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				for (i = 0; i <= 9; i++)
				{
					int nk = n * 10 + k;
					int li = l * 10 + i;

					if (nk >= li)
					{
						continue;
					}

					putchar(n + '0');
					putchar(k + '0');
					putchar(32);
					putchar(l + '0');
					putchar(i + '0');
					if (n == 9 && k == 8 && l == 9 && i == 9)
					{
						continue;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
