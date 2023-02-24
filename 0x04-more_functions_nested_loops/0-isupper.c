#include "main.h"

/**
 * _isupper - function that checks for uppercase
 *
 * @c: function parameter
 *
 * Return: 1 if it is uppercasw
 * otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
