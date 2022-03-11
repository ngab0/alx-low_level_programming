#include <stdio.h>

/**
* main - print the alphabet in lower and uppercase
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
	for (i = 0; i < 26; i++)
	{
		putchar(i + 65);
	}
	printf("\n");
	return (0);
}
