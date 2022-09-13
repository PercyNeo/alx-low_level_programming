#include <stdio.h>
/**
* program that prints _putchar
* The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_until_newline(char *s);

int main(void)
{
char s[] ="_putchar\n";
print_until_newline(s);
putchar('\n');
return (0);
}
void print_until_newline(char *s)
{
int i = 0;

while ( s[i] != '\n' && s[i] != '\0')
{
putchar(s[i]);
i++;
}
}
