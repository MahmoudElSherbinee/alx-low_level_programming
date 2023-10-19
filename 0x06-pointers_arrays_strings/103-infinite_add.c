#include "main.h"

/**
 * infinite_add - fuction to list the separators and check the index
 *
 * @n1: check the input
 *
 * @n2: check the input
 *
 * @r: check the input
 *
 * @size_r: check the input
 *
 * Return: the char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1;
    int len2;
    int bigger;
    int x;
    int n1digit;
    int n2digit;
    int carry;

    len1 = 0;
    len2 = 0;
    bigger = 0;
    carry = 0;

    while (n1[len1] != '\0')
    {
        len1++;
    }
    while (n2[len2] != '\0')
    {
        len2++;
    }

    if (len1 > len2)
    {
        bigger = len1;
    }
    else
    {
        bigger = len2;
    }

    if (bigger + 1 > size_r)
    {
        return (0);
    }
    r[bigger] = '\0';

    for (x = bigger - 1; x >= 0; x--)
    {
        len1--;
        len2--;

        if (len1 >= 0)
        {
            n1digit = n1[len1] - 48;
        }
        else
        {
            n1digit = 0;
        }

        if (len2 >= 0)
        {
            n2digit = n2[len2] - 48;
        }
        else
        {
            n2digit = 0;
        }

        r[x] = (n1digit + n2digit + carry) % 10 + 48;
        carry = (n1digit + n2digit + carry) / 10;
    }

    if (carry == 1)
    {
        r[bigger + 1] = '\0';
        if (bigger + 2 > size_r)
        {
            return (0);
        }
        while (bigger-- >= 0)
        {
            r[bigger + 1] = r[bigger];
        }
        r[0] = carry + 48;
    }
    return (r);
}
