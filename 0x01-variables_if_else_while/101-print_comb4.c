#include <stdio.h>

/**
* main - print all combinations of single digits in base10
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i != j && i != k && j != k)
					if (i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i != 55)
						{
							putchar(44);
							putchar(32);
						}
					}
			}
		}
	}
	putchar(10);
	return (0);
}
