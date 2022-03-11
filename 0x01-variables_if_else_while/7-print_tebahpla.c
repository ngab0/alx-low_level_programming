#include <stdio.h>

/**
* main - print the alphabet in reverse
* Description : use the putchar function
* Return: 0
*/

int main(void)
{
	int i = 122;

	for (; i > 96; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
