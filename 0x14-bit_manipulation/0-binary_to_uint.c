#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary to convert
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int w, t, p;
	unsigned int res;

	res = 0;
	if (!b)
		return (0);
	for (t = 0; b[t] != '\0'; t++)
	{
		if (b[t] != '0' && b[t] != '1')
			return (0);
		if (b[t] == '1')
			break;
	}
	p = 0;
	for (w = strlen(b) - 1; w >= t; w--)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);
		if (b[w] == '0')
		{
			p++;
			continue;
		}
		res += 1 << p;
		p++;
	}
	return (res);
}
