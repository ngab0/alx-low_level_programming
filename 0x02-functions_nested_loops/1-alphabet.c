#include "main.h"

/**
* main - prints the alphabet
* Description : Uses _putchar function
* Return: 0
*/

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(i + 97);
	}
	_putchar(10);
	return (0);
}
