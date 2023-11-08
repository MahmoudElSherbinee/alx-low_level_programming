#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*--------------------*/

/**
* struct op_t - Short description
* @operator: the operator
* @func: the function that will be executable
*
* Description: define the wanted
*/
typedef struct op_t
{
	char *operator;

	int (*func)(int a, int b);

} op_t;

/*--------------------*/

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

/*--------------------*/

int (*get_op_func(char *s))(int, int);

#endif
