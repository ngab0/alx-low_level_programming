/*#include <stdio.h>*/
#include "main.h"

/*
 * _memcpy - copy n bytes from one area to another
 * @dest: place to be copied to
 * @src: place to be copied from
 * @n: number of bytes to copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;
	char *a = dest;

	while (i < n)
	{
		*(dest + i) = _putchar(*(src + i));
		i++;
	}
	return (a);
}
