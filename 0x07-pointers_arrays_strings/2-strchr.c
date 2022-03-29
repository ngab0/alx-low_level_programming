#include "main.h"

/**
 *_strchr- Locate a character in a string
 *@s: string to be checked
 *@c: character to be located in the string
 *Return: pointer to 
 */

char *_strchr(char *s, char c)
{
	int i, length = 0;
	int check = 0;

	for (; i < s[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(s + i) == c)
			check++;
			return (s);
	}

	if (check == 0)
		return (0);
}
