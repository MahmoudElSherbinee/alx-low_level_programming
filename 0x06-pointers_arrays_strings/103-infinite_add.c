#include "main.h"

/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String
 *
 * Return: Lenght of str
 */

int _strlen(char *str)
{
    int x;

    int len;

    len = 0;

    for (x = 0; str[x]; x++)
        len++;

    return (len);
}

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: First Number
 * @n2: Secend Number
 * @r: Buffer Where to store the result
 * @size_r: Size of the buffer r
 *
 * Return: Pointer to the buffer r or 0 if the buffer can fit the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i;

    int l1;

    int l2;

    int bigger;

    int s;

    int carry;

    char t;

    carry = 0;
    i = 0;
    l1 = _strlen(n1);
    l2 = _strlen(n2);

    bigger = l1 > l2 ? l1 : l2;

    if (bigger + 1 >= size_r)
        return (0);

    l1--;
    l2--;
    while (l1 >= 0 || l2 >= 0 || carry != 0)
    {
        s = carry;

        if (l1 >= 0)
            s += n1[l1--] - '0';
        if (l2 >= 0)
            s += n2[l2--] - '0';

        carry = s / 10;
        r[i++] = s % 10 + '0';
    }

    r[i] = '\0';

    for (i = 0; i <= (i - 1) / 2; i++)
    {
        t = r[i];
        r[i] = r[i - 1 - i];
        r[i - 1 - i] = t;
    }
    return (r);
}
