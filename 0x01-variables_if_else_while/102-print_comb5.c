#include <stdio.h>

/**
* main - print all combinations of two two-digit numbers
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					putchar(32);
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					putchar(44);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
