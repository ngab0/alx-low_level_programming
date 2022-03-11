#include <stdio.h>

/**
* main - print single digit numbers in base 10
* Description : you can only use putchar function twice
* Return: 0
*/

int main(void)
{
	int i = 48;

	putchar(i);
	do {
		i++;
		putchar(i);
	} while (i < 57);
	printf("\n");
	return (0);
}
