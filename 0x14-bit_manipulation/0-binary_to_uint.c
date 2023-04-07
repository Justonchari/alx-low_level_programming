#include "main.h"

/**
 * binary_to_uint - unction that converts a binary number
 * to an unsigned int
 *
 * @b: string containing the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b);
{
	int n;
	unsigned int val = 0;

	if (!b || b = NULL)
		return (0);

	for (n = 0; b[i]; i++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		val = 2 * val + (b[n] - 'n');
	}

	return (val);
}

}
