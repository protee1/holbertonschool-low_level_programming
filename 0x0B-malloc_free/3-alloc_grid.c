#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int a, b, **net;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	net = malloc(sizeof(int) * height);

	if(net == '\0')
	{
		return ('\0');
	}
	for(a = 0 ; a < height ; a++)
	{
		net[a] = malloc(sizeof(int) * width);
		for(b = 0 ; b < width ; b++)
		{
			net[a][b] = 0;
		}

	}
	return (net);
}
