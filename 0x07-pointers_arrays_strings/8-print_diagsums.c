#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - sum of two diagonals of a sqaure matrix of integers
 *@a: 2d array of characters
 *@size: number matrix
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
