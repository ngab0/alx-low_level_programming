#include "main.h"

/**
 *rev_string- this function reverses a string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
int i, j, length;
char a, b;

for (length = 0; s[length]; length++)
{
}
j = length - 1;
i = 0;
while (j > i)
{
a = s[i];
b = s[j];
s[i] = a;
s[j] = b;
j--;
i++;
}
}
