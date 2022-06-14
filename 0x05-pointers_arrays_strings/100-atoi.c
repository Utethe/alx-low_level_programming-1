#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string s
 * Return: the number for string s
 */
int _atoi(char *s)
{

	int i, sn;
	char num[12] = "0";
	int v = atoi(s);

	i = 0;
	sn = 1;
	if (v > 0)
	{
		return (v);
	}

	for (i = 0; i < strlen(s); i++)
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
			strncat(num, &s[i], 1);
		}
	}
	return (sn * atoi(num));
}
