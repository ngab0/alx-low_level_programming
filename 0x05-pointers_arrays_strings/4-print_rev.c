#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 *@s: string to be printed
 */

void print_rev(char *s)
{
int length, i = 0;

for (length = 0; s[length] != '\0'; length++)
{
}
for (i = length - 1; i > 1; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
