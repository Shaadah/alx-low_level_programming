#include "main.h"

/**
 * abs - Computes the absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value of number or 0
 */

int abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
