#include "main.h"

/**
 * print_line - prints the character "_" n times to forn a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int t = n;

	for (t = n; t > 0; t--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
