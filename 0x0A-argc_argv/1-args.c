#include <stdio.h>
#include "main.h"

/**
 * main - this is the main function
 * @argc: arguent count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
        return (0);
}
