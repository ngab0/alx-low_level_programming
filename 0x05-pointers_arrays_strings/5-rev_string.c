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
v1 = s[i];
v2 = s[j];
s[i] = v1;
s[j] = v2;
j--;
i++;
}
}
