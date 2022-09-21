#include "main.h"
/**
*_strancpy - Cfunction that copies a string, including the
*terminating null byte, using at most an inputted number of bytes.
*If the lengthof the source using at most inputted numeber of bytes.
*the remainder of the destination string  is filled with null bytes.
*Works identically to the standdard library function strncpy.
*@dest: buffer storing the string
*@src: the source string
*@n: max number of bytes copied
*Return: returns
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i - 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
