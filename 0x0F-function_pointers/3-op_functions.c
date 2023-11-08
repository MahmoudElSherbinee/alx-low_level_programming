#include "3-calc.h"

/**
* op_add - is a function to add two integers
*
* @a: check the first integer
* @b: check the second integer
*
* Return: the result of addition
*
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - is a function to subtrace two integers
*
* @a: check the first integer
* @b: check the second integer
*
* Return: the result of subtraction
*
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - is a function to multiply two integers
*
* @a: check the first integer
* @b: check the second integer
*
* Return: the result of multiplication
*
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - is a function to divide two integers
*
* @a: check the first integer
* @b: check the second integer
*
* Return: the result of division
*
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
* op_mod - is a function to get the mod of two integers
*
* @a: check the first integer
* @b: check the second integer
*
* Return: the result of modulo
*
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
