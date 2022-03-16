#include "main.h"

/**
* _isalpha - checks for character in the alphabet
* Description : the functions use if statements
*@c: c c is an ascii character
* Return: 1 if c is an alphabet
*/

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
