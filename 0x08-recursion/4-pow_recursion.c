#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: Returns the value of x raised to y
 * @x: The base number
 * @y: The power/index of y
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result *= _pow_recursion(x, (y - 1));
	}
	return (result);
}
