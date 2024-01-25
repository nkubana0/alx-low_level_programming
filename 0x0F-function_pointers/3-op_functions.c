#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - returns the sum of a and b
* @a: the first parameter
* @b: the second parameter
* Return: the sum of the first and second parameter
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts two numbers
* @a: the first parameter
* @b: the second parameter
* Return: difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbers
* @a: the first parameter
* @b: the second parameter
* Return: product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides a by b
* @a: the first parameter
* @b: the second parameter
* Return: the result of the division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - find the modulus of a by b
* @a: the first number
* @b: the second number
* Return: the modulus of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
