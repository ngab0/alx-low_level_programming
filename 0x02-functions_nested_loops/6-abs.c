#include "main.h"

/**
* _abs - compute the absolute value of an integer
* Description : the functions use if statements
*@n: n is a number
* Return: integer
*/

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
