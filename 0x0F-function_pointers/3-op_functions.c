#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - adds two ints
 * @a: first int
 * @b: second int
 * Return: result of addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integerss
 * @a: first int
 * @b: second int
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first int
 * @b: second int
 * Return: result of div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds modulus of two numbers
 * @a: fist number
 * @b: second number
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
