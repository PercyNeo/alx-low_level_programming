#include "main.h"

/**
* _strdup - return  a pointer to a newly allocated.
* space in memery, which contains a copy of the
* string given as parameter
* @str: string to be copied
* Return: NILL in case of error, pointer to allocated
* space
*/

char *_strdup(char *str)
{
char *cpy;
int index, len;

if (str == NULL)
return (NULL);

for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * clen + 1));

if (cpy == NULL)
return (NULL);

for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}

cpy[len] = '\0';

return (cpy);

}
