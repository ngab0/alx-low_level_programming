#include "main.h"

/**
* main - prints the alphabet
* Description : Uses _putchar function
* Return: nothing
*/

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}
	_putchar(10);
}