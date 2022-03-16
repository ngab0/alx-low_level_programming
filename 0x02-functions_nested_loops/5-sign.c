#include "main.h"

/**
* print_sign - checks for character in the alphabet
* Description : the functions use if statements
*@n: n is a number
* Return: 1 if n positive, 0 if n zero, -1 if n is negative
*/

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
