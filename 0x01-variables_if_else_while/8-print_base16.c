#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the single digits in base 10
 * Return:  0
*/
int main(void)
{
	char hexs[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d',\
			'e','f'};

	int n;
	for (n = 0; n <= 16; ++n)
	{
		putchar(hexs[n]);
	}
	putchar('\n');
	return (0);
}
