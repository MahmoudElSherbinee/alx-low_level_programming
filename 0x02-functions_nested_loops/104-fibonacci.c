#include <stdio.h>

/**
 * numLength - this is the master function
 *
 * @num: enable us to write a standard output
 *
 * Return: number of digist in num
 */

int numLength(int num)
{
	int lenght = 0;

	if (!num)
		return (1);
	while (num)
{
		num = num / 10;
		length = length + 1;
}
	return (length);
}

/**
 * main - this is the master function
 *
 * Description: enable us to write a standard output
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;
	int initial0s;
	unsigned long f1 = 1;
	unsigned long f2 = 2;
	unsigned long sum;
	unsigned long max = 100000000;
	unsigned long f1o = 0;
	unsigned long f2o = 0;
	unsigned long sumo = 0;

	for (count = 1; count <= 98; count++)
{
	if (f1o > 0)
		printf("%lu", f1o);
	initial0s = numLength(max) - 1 - numLength(f1);
	while (f1o > 0 && initial0s > 0)
	{
		printf("%d", 0);
		initial0s--;
	}
	printf("%lu", f1);

	sum = (f1 + f2) % max;
	sumo = f1o + f2o + (f1 + f2) / max;
	f1 = f2;
	f1o = f2o;
	f2 = sum;
	f2o = sumo;

	if (count != 98)
		printf(", ");
	else
		printf("\n");
}
	return (0);
}
