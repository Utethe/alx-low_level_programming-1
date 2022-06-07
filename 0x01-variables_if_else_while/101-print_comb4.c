#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 * Return:  0
*/
int main(void)
{
	int n;
	int st1 = 1;
	int st2 = 2;

	for (n = 0; n <= 9; n++)
	{
		int k;
		for (k = st1; k <= 9; ++k)
		{
			int l;
			for (l = st2; l <= 9; ++l)
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
			st2++;
		}
		st1++;
	}
	putchar('\n');
	return (0);
}
