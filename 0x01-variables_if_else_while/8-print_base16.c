#include <stdio.h>

/**
* main - print single digits in base 16
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i = 48;

	for (; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
