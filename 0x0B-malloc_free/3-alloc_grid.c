#include"main.h"
/**
 * **alloc_grid- returns pointer to a 2 dimensional
 * array of integers
 * @widths: width of array
 * @height: height of array
 * Return: null if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, size_grid;
	int **arr


	if (width <= 0 || height <= 0)
		return (NULL);
	while (i < width && j < height)
	{
		size_grid = width * height;
		arr = malloc(sizeof(int) * size_grid);
		*arr[i][j] = 0;
		i++;
		j++;
	}
	return (arr);
