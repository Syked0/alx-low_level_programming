#include <stdio.h>
#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer
 * Return: number of caracter
 */

int _strlen(char *s)
{
int j = 0;
for (int i = 0; s[i] != '\0'; i++)
{
j++;
}
return (j);
}
