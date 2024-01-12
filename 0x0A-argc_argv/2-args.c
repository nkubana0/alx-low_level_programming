#include <stdio.h>

/**
 * main - print all arguments
 * @argc: The argument main
 * @argv: values inside argc
 * Return: Always 0 :) Success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
