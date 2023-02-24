#include "main.h"

/**
 * print_diagonal - function prints a diagonal line
 *
 * @n: function parameter
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
