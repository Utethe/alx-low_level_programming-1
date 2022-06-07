#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the whole alphabets in lower case except q and e
 * Return:  0
*/
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; ++l)
	{
		if (l == 'q' || l == 'e')
		{
			continue;
		}
		putchar(l);
	}
	putchar('\n');
	return (0);
}
