#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int fl_value = 0;

	if (!b)
		return (0);
	for (n = 0 ; b[n] ; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		else if (b[n] == '0' || b[n] == '1')
		{
			fl_value = 2 * fl_value + (b[n] - '0');
		}
	}
	return (fl_value);
}
