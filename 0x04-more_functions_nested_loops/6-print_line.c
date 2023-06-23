#include "main.h"

/**
 * void print_line - draws a straight line in the terminal
 * Return: 0
 * @n: number of times the character _
 */

void print_line(int n)
{
	while (n > 0)
	{
		for (int i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}	
	_putchar('\n');
}
