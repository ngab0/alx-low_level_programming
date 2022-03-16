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
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
