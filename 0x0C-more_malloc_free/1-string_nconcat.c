#include "main.h"

/**
 * string_nconcat - fuction that making memory allocation
 *
 * @b: check the number of bytes to be located
 *
 * Return: address of the memory address
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *ptr;
    unsigned int i;
    unsigned int length1;
    unsigned int length2;

    for (i = 0; s1[i] != '\0'; i++)
    {
        length1++;
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        length2++;
    }
    if (length2 <= n)
    {
        length2 = n;
    }

    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    ptr = malloc(sizeof(char) * (length1 + length2));
    if (ptr == 0)
    {
        return (NULL);
    }
    for (i = 0; s1[i] != '\0'; i++)
    {
        ptr[i] = s1[i];
    }
    for (i = 0; i < n; i++)
    {
        ptr[length1 + i] = s2[i];
    }

    return (ptr);
}