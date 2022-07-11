#include <stdlib.h>

/**
 * create_array - creates an array of chars of a size
 * and initializes it with a char
 * @size: size of the array
 * @c: character for initialization
 * Return: a pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *cr = (char *)malloc(sizeof(char) * size);

	if (cr == NULL)
		return (NULL);
	for (size_t i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
