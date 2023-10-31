#include "main.h"
/**
* alloc_grid - function for creating array
*
* @width: check required width of the array
* @height: check required height of the array
*
* Return: 0 Always success
*/
int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
