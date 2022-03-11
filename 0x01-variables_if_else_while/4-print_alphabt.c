#include <stdio.h>

/**
* main - print the alphabet excluding q and e
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;
		else
			putchar(i + 97);
	}
	printf("\n");
	return (0);
}
