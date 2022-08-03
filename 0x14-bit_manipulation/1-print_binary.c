#include "main.h"
/**
 * print_binary - prints binary version of unsigned int n
 * @n: decimal to convert
 * Return: an unsigned int
 */
void print_binary(unsigned long int n)
{
	unsigned int w, rm = 0;

	while (w != 0)
	{
		w = n >> 1;
		rm = n - (w << 1);
		n = w;
		_putchar(rm + '0');
	}
}
