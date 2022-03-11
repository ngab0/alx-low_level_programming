#include <stdio.h>

/**
* main - print all combinations of single digits in base10
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = 49; j < 57; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (i != j || i != k || j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
