#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: size of integer of 2-dimensional array.
 * @height: size of integer of 3-dimensional array.
 *
 * Return: if width <= 0, height <= 0, the function fails = NULL.
 *         Otherwise return pointer to the 2-dimensional arrays of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int index_hgt;
	int index_wid;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(height * sizeof(int));

	if (twoD == NULL)
		return (NULL);

	for (index_hgt = 0; index_hgt < height; index_hgt++)
	{
		twoD[index_hgt] = malloc(width * sizeof(int));

		if (twoD[index_hgt] == NULL)
		{
			for (; index_hgt >= 0; index_hgt--)
				free(twoD[index_hgt]);
			free(twoD);
			return (NULL);

		}
		for (index_wid = 0; index_wid < width; index_wid++)
			twoD[index_hgt][index_wid] = 0;

	}

	return (twoD);
}
