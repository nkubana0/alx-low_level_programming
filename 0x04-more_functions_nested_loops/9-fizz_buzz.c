#include "main.h"
#include <stdio.h>

/**
 * main - display number between 1 -100 with new line end
 * number multiplie by 3 = fizz
 * number multiplie by 5 = buzz
 * number multiplie by 3 & 5 =fizzbuzz
 * seperated by space
 * Return: 0 successfully
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf(" Buzz");
		}
		else if  (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num == 1)
		{
			printf("%d", num);
		}
		else
		{
			printf(" %d", num);
		}
		num += 1;
	}
	printf("\n");

	return (0);
}
