#include"main.h"
/**
 * **alloc_grid- returns pointer to a 2 dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 * Return: null if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, size_grid;
	int **arr;


	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = (int *)malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					*arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
