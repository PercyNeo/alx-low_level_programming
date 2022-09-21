#include "main.h"
/**
*_strcat-concatenats the string pointer to by @src to
*@dest:String that will append be appended
*@src: String to be concatenated upon
*@n:integer parameter to compare index to
*Return: returns new concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
