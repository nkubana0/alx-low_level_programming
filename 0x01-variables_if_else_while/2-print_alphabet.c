#include <stdio.h>
#include <stdlib.h>
/**
 * main - main part of code
 * description - prints entire alphabet
 * returns 0
 */
int main(void)
{       
        char c=('a');
        while (c<='z')
        {
            putchar(c);
            c++;
        }
        putchar("\n");
        return 0;
}
