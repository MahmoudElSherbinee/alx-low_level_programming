#include "main.h"
/**
* length - function to calculate the lenght of a string
*
* @c: array of characters
*
* Return: length of the string
*/

int length(char *c)
{
	int len = 0, i;

	for (i = 0; c[i]; i++)
		len++;

	return (len);
}

/**
* argstostr - function to concatenate all arguments
*
* @ac: check the arguments count
* @av: check the arguments
*
* Return: 0 always success
*/
char *argstostr(int ac, char **av)
{
	int i;

	int j;

	int size = ac;

	int pos = 0;

	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		size += length(av[i]);

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[pos++] = av[i][j];
		}
		ptr[pos++] = '\n';
	}
	ptr[pos] = '\0';

	return (ptr);
}
