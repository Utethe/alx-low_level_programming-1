#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * append_digits - append an integer to another
 * @i1: integer 1
 * @i2: integer 2
 * Return: int
 */
int append_digits(int i1, int i2)
{
	int i2_copy = i2;

	while (i2_copy)
	{
		i1 *= 10;
		i2_copy /= 10;
	}
	return (i1 + i2);
}


/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string s
 * Return: the number for string s
 */
int _atoi(char *s)
{

	int i, sn;
	int num = 0;
	int v = atoi(s);

	i = 0;
	sn = 1;
	if (v > 0)
	{
		return (v);
	}

	for (i = 0; i < (int)strlen(s); i++)
	{
		if (s[i] == 43)
		{
			sn = sn * 1;
		}
		else if (s[i] == 45)
		{
			sn = sn * -1;
		}
		else if (isdigit(s[i]))
		{
			char c = s[i];
			int a = atoi(&c);

			num = append_digits(num, a);
		}
	}
	return (sn * num);
}
