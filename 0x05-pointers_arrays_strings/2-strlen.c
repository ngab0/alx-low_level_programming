#include "main.h"

/**
 * _strlen - finds the lenght of the string
 * @s: string
 * Return: length of the string
 */

int _strlen(char *s)
{
int i, length = 0;

for (i = 0; s[i]; i++)
{
length++;
}
return (length);
}
