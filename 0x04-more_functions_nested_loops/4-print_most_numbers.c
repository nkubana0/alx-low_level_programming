#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9
 * Do not print 2 and 4
 * Use _putchar only twice
 * Return 0
 */

void print_most_numbers(void);
{
        int number = 0;

        while (number < 10)
        {
                if (number !=2 && number != 4)
                {
                        _putchar(number + '0');
                }
                number += 1;
        }
        _puchar('\n');
}
