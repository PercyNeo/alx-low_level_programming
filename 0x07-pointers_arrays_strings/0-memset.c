#include "main.h"
/**
* _memset - Fills the first n bytes of the memory area
*@s: address to memory block
* @s: A pointer to the memory area to be filled.
* @n: The number of bytes to be filled b.
* @b: char to be used
* * Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
	s[n - 1] = b;
	n--;
}
return (s);
}
