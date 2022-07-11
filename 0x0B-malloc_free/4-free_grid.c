#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2D array of int
 * @width: width of the 2D array
 * @height: height of the 2D array
 * Return: a pointer a 2D array of int
 */
void free_grid(int **grid, int height)
{
	int **cr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	cr = (int **)malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		cr[i] = (int *)calloc(width, sizeof(int));
		if (cr[i] == NULL)
			return (NULL);
	}
	return (cr);
}
