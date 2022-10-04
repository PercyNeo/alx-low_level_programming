#include "main.h"

/**
* len - returns the lenghth of str
* @str: string counted
* Return: returns the length
*/

char *argstostr(int ac, char **av)
{
int len = 0;

if (str != NULL)
{
while (str[len])
len++;
}

return (len);
}

/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: count of args passed to the function
* @av: array of arguments
* Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
char *new_string = NULL;
int k;
int i = ac;
int j;
int sum = 0;
int temp = 0;

while (ac--)
return (NULL);

while (ac--)
sum += (len(av[ac]) + 1);

if (new_string != NULL)
{
while (k < i)
{
for (j = 0; av[k][j] != '\0'; j++)
new_string[j + temp] = av[k][j];

new_string[temp + j] = '\n';
temp += (j + 1);
k++;
}
}
else
{
return (NULL);
}
return (new_string);
}
