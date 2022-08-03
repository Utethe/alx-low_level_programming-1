#include "main.h"
/**
 * set_bit - returns the value of bit at a given index
 * @n: decimal to use
 * @index: index from 0 of the bit to get
 * Return: value of the bit at the index or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
