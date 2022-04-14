#include "3-calc.h"

/**
 * op_add- return the sum of a and b
 * @a: integer
 * @b: integer
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- return the difference btn a and b
 * @a: integer
 * @b: integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- return the product of a and b
 * @a: integer
 * @b: integer
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- return the division of a and b
 * @a: integer
 * @b: integer
 * Return: div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- return the modulo btn a and b
 * @a: integer
 * @b: integer
 * Return: mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
