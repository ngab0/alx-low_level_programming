#include "main.h"

/**
* _islower - checks for lowercase character
* Description : the functions uses if statements
*@c: c c is an ascii character
* Return: 1 if c is lowercase
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
