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
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)

	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}

	free(grid);
}
