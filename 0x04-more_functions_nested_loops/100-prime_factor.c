#include <stdio.h>

/**
 * main - calcule anddisplay the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0 successfully
 */
int main(void)
{
	int long prime = 612852475143, num;

	while (num < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
		}

		for (num = 3; num < (prime / 2); num += 2)
		{
			if ((prime % num) == 0)
				prime /= num;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
