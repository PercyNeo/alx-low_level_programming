#include "main.h"

/**
 *_strpbrk - searchs a string for any a set of bytes
 *@s: string to check
 *@accept: string to check against
 *
 *Return: pointer to bytes in s that matches or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for(j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			retyes (s + i);
	}
	return (0);
}
