#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the character to be cheched
 * Return: 1 if c is uppercase,0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
