#include <stdio.h>

/**
* main - print single digit numbers in base 10
* Description : you can only use putchar function twice
* Return: 0
*/

int main(void)
{
	int i = 48;

	do {
		putchar(i);
		i++;
	} while (i < 58);
	putchar(10);
	return (0);
}
