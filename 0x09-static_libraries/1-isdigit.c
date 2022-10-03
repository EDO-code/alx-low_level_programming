#include "main.h"

/**
 * _isdigit - checks for digit in 0 and 9
 * @c: digit to be checked
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
