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
    int length1;
    int length2;
    int bigger;
    int x;
    int n1_digit;
    int n2_digit;
    int carry;

    length1 = 0;
    length2 = 0;
    bigger = 0;
    carry = 0;

    while (n1[length1] != '\0')
    {
        length1++;
    }
    while (n2[length2] != '\0')
    {
        length2++;
    }

    if (length1 > length2)
    {
        bigger = length1;
    }
    else
    {
        bigger = length2;
    }

    if (bigger + 1 > size_r)
    {
        return (0);
    }
    r[bigger] = '\0';

    for (x = bigger - 1; x >= 0; x--)
    {
        length1--;
        length2--;

        if (length1 >= 0)
        {
            n1_digit = n1[length1] - 48;
        }
        else
        {
            n1_digit = 0;
        }

        if (length2 >= 0)
        {
            n2_digit = n2[length2] - 48;
        }
        else
        {
            n2_digit = 0;
        }

        r[x] = (n1_digit + n2_digit + carry) % 10 + 48;
        carry = (n1_digit + n2_digit + carry) / 10;
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
