#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *b = (char *) &n;

	return (*b);
}
