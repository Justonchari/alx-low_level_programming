#include <stdio.h>
#include <stdlib.h>

/**
 * main- main function
 * @argc: argument count
 * @argv[]: argument vector
 */


int main(int argc, char *argv[])
{
	int cent;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while  (cent> 0)
	{
		if (cent >= 25)
			cent = cent - 25;
		else if (cent >= 10)
			cent = cent - 10;
		else if (cent >= 5)
			cent = cent - 5;
		else if (cent >= 2)
			cent = cent -2;
		else if (cent >= 1)
			cent = cent -1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
