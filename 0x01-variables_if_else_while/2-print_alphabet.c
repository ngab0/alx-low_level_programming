#include <stdio.h>

/**
* main - print the alphabet
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}
	printf("\n");
	return (0);
}
