#include "3-calc.h"




/**
 * op_add - Adds two integers
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}



/**
 * op_sub - Subtracts two integers
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: Difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - Multiplies two integers
 * @a: Integer 1
 * @b: Integer 2
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - Divides two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the modulus of a number
 * @a: Number being operated on
 * @b: The divisor
 *
 * Return: The modulus of a number
 */

int op_mod(int a, int b)
{
	return (a % b);
}
