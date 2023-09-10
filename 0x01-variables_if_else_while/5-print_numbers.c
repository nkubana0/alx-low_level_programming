#include <stdio.h>
#include <stdlib.h>
/**
 * main - main part of code
 * description - prints numbers
 * return 0
*/

int main(void){

    char c = '0';
    while (c <= '9')
    {
        putchar(c);
        c++;
    }
    putchar("\n");
    return 0;
    
}
