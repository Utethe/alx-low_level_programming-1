#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the single digits in base 10
 * Return:  0
*/
int main(void)
{
	int n;
	int st = 1;

	for (n = 0; n <= 9; ++n)
	{
		int k;
		for (k = st; k <= 9; ++k)
		{
			putchar(n + '0');
			putchar(k + '0');
			if (n == 8 && k == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
		st++;
	}
	putchar('\n');
	return (0);
}
