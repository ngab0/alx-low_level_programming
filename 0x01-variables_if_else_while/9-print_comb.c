#include <stdio.h>

/**
* main - print all combinations of single digits in base10
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
