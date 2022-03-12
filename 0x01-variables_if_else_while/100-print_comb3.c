#include <stdio.h>

/**
* main - print all possible combinations of two digits
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j)
				if (i * j == j * i && i < j)
				{
					putchar(i);
					putchar(j);
					putchar(44);
					putchar(32);
				}
		}
	}
	putchar(10);
	return (0);
}
