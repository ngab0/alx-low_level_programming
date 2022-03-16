#include "main.h"

/**
* main - prints '_putchar'
* Description : Uses _putchar function
* Return: 0
*/

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar(10);
	return (0);
}
