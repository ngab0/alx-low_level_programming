#include "main.h"

/**
 *_strchr- Locate a character in a string
 *@s: string to be checked
 *@c: character to be located in the string
 *Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}

	if (*s == c)
		return (s);

	return (0);
}
