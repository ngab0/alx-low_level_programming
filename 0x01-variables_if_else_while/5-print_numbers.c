#include <stdio.h>

/**
* main - print single digit numbers in base 10
* Description : use the do while loop
* Return: 0
*/

int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
