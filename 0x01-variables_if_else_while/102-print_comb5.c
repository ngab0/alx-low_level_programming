#include <stdio.h>

/**
* main - print all combinations of two two-digit numbers
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		j = i;
		for (; j < 100; j++)
		{
			if (j != i)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
