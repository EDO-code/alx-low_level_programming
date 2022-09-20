#include "main.h"

/**
 * print_rev - a function that prints string in reverse
 * @s: string parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int idx = 0;
	int r_idx;
	int x;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		continue;
	}
	r_idx = length - 1;

	while (idx != r_idx && idx < r_idx)
	{
		x = s[idx];
		s[idx] = s[r_idx];
		s[r_idx] = x;
		idx++;
		r_idx--;
	}
}

