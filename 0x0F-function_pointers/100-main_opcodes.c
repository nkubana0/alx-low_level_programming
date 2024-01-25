#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: argument vector
* Return: always O
*/
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
		printf(" ");
		else
			printf("\n");
	}
	return (0);
}
