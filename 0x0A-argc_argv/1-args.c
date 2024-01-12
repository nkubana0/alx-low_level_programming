#include <stdio.h>
#include "main.h"

/**
 * main - number of argumnents in a function
 * @argc: main counter in a function
 * @argv: argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
