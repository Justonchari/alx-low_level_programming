#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: parameter of the function
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int i;
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (sqrt(n, i + 1));
}
