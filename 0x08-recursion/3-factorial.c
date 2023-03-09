#include "main.h"

/**
 * factorial - main function
 * @n: parameter of the function
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
