#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: 0 success
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
