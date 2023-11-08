#include "3-calc.h"

/**
* main - check the code
*
* @argc: number of inputs
* @argv: value of inputs
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int (*opp)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opp = get_op_func(argv[2]);
	if (opp == 0)
	{
		printf("Error\n");
		exit(99);
	}

	result = opp(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
