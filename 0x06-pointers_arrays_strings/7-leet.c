#include <string.h>
#include <stdio.h>
/**
 * leet - capitalizes all words of a string.
 * @str: strings
 * Return: pointer to str
 */
char *leet(char *str)
{
	char ch;
	int nx;
	int a = 0;

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'A', 'E', 'O', 'T', 'L'};
	char c[] = {4, 3, 0, 7, 1};
	char op = strstr(, array('1','3','7'), str);
	while (str[a])
	{
		switch (str[a])
		{
		case 9:
		case 32:
		case 10:
		case 44:
		case 59:
		case 46:
		case 33:
		case 63:
		case 34:
		case 40:
		case 41:
		case 123:
		case 125:
			nx = a + 1;
			ch = str[nx];
			if (isalpha(ch))
			{
				*(str + nx) = toupper(ch);
			}
			break;
		}
		a++;
	}
	return (str);
}
