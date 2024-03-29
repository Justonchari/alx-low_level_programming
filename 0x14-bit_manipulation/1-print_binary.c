#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int m;
	int count = 0;
	unsigned long int current;

	for (m = 63; m >= 0 ; m--)
	{
		current = n >> m;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
