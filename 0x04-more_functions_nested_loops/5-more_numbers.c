#include "main.h"

/**
 * more_numbers - prints the numbers
 *
 */

void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d <= 9; d++)
	{
		for (i = 0; <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
