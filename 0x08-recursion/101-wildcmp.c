#include <stdio.h>
#include <string.h>
/**
 * my_palindrome - checks if a string is palindrome
 * @s1: string to check
 * @s2: string to check
 * @i: small index
 * @li: big index
 * Return: 1 if n is a prime number, else 0
 */
int my_palindrome(char *s, int i, int li)
{
	if (i >= li)
		return (1);
	if (s[i] != s[li])
		return (0);
	return (my_palindrome(s, i + 1, li - 1));
}

/**
 * is_palindrome - compares two strings and returns
 * @s1: string to check
 * @s2: string to check
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	int i, li;

	if (s1 == s2)
		return (1);
	// i = 0;
	// li = strlen(s) - 1;
	// return (my_palindrome(s, i, li));
}
