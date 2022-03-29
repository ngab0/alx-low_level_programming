#include "main.h"

/**
 *_strspn- get the length of a prefix substring
 *@s: String to be scanned
 *@accept: String containing list of characters to be matched
 *Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;
	char *str1, *str2;
i
	str1 = s;
	str2 = accept;

	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str2[j] == str1[i])
			{
				count++;	
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (count);
}
