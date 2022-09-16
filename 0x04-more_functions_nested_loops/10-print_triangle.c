#include "main.h"

/**
 * print_triangle - prints triangle with #'s given size
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int h, w, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= h; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
