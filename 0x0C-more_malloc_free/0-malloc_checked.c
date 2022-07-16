#include <stdlib.h>

/**
 * malloc_checked - 
 * @b: 
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}