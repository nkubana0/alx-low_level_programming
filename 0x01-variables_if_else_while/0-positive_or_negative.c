#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-main part of code
 * description- assigns positive or negative to generated number
 * returns 0
 */

int main(void){
	int n;

	srand(time(0));
	n =rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("is positive");
	}
        
        else if (n==0){
	        printf("is zero");
	}
	else{
	        printf("is negative");
	}
return 0;
}
