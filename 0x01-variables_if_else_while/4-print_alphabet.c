#include <stdio.h>
#include <stdlib.h>
/**
 * main - main part of code
 * description - prints alphabet except q and e
 * return 0
 */
int main(void)
{
	char c=('a);
	while(c<='z')
	{
		if(c!='q' && c!='e')
		{
			putchar(c);
			c++;
		}
		
	}
	putchar("\n");
	return 0;
}
