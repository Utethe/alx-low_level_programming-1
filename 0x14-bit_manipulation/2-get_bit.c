#include "main.h"
/**
 * get_bit - returns the value of bit at a given index
 * @n: decimal to use
 * @index: index from 0 of the bit to get
 * Return: value of the bit at the index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v = -1;
	unsigned int k;

	for (k = 0; k <= index; k++)
	{
		v = n & 1;
		n = n >> 1;
	}
	return (v);
}
