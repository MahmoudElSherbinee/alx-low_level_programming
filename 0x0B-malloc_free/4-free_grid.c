#include "main.h"
/**
* free_grid - function for creating array
*
* @grid: check required width of the array
* @height: check required height of the array
*
* Return: 0 Always success
*/

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}

	for (int i = 0; i < height; i++)

	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
