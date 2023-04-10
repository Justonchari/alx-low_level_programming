#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 *
 * @n: parameter containing first number
 * @m: parameter containing second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;
	unsigned long int current;
	unsigned long int new = n ^ m;

	for (i = 63; i >= 0 ; i--)
	{
		current = new >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
