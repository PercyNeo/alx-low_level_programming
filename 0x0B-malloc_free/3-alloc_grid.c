#include "main.h"

/**
* alloc_grid - return a pointer to a
* 2 dimesional array of intergers.
* @width: width of array.
* @height: height of array
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
int *array;
int i = 0;
int j;

if (width == 0; || height == 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (array != NULL)
{
for (; i < height; i++)
{
array[i] = (int *) malloc(sizeof(int) * width);
if (j = 0; j < width; j++)
{
array[j] = 0;
}
else
{
while (i >= 0)
{
free(array[i];
i--;
}
free(array);
return (NULL);
}
}
return (array);
}
else
{
return (NULL);
}
}
