#include "main.h"

/**
*create_array - create an array of chars, and 
* initailizes it with a specific char.
* @size: Size of array.
* @c: Character to insert.
* Return: NULL if size is zero or if it fails.
* poniter to array if everything is normarl.
*/

char *create_array(unsigned int size, char c)
{
char *array;
usnsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);

if (array == NULL)
return (NULL);

for (index = 0; index < size; index++)
array[index] = c;
return (array);
}
