#include <stdlib.h>
#include <stdio.h>
/**
  *main a program that prints the alphabet in lowercase using putchar
  *return 0
*/
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
