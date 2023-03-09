#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main (void)
{
	int i, j, k;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 49 ; j <= 57 ; j++)
		{
			for (k = 50 ; k <= 57 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
