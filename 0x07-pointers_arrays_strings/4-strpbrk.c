#include "main.h"

/**
 *_strpbrk- matches specified characters
 *@s: String to be scanned
 *@accept: matching character
 *Return: string that matches characters specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
