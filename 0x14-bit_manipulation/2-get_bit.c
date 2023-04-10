#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter that has number
 * @index: parameter that has index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);
	val_bit = (n >> index) & 1;
	return (val_bit);
}
