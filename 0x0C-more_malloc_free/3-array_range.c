#include <stdlib.h>

/**
 * array_range - allocates memory for an array using malloc
 * @min: length of the array
 * @max: size of each element of the array
 * Return: a pointer to the allocated memory or NULL otherwise
 */
int *array_range(int min, int max)
{
	char *ptr;
	unsigned int f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	f = 0;
	while (f < nmemb)
	{
		ptr[f] = 0;
		f++;
	}
	return (ptr);
}
