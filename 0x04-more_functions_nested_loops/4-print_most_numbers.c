#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
