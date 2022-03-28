#include "main.h"

/**
 *_memset - fill in bytes of a memory area with a constant byte
 *@s: pointer to memory area
 *@b: constant byte to be filled in
 *@n: number of times b will be filled in
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *a = s;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (a);
}
