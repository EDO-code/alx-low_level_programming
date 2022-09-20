#include "main.h"

/**
 * print_rev - a function that prints string in reverse
 * @s: string parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int index = 0;
	int r_index;
	int d;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		continue;
	}
	r_index = length - 1;

	while (index != r_index && index < r_index)
	{
		d = s[index];
		s[index] = s[r_index];
		s[r_index] = d;
		index++;
		r_index--;
	}
}

