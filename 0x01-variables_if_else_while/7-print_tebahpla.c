#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the whole alphabets in lower case reverse
 * Return:  0
*/
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; --l)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
