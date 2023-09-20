#include "main.h"

/**
 * *leet - crypt your message
 *  a and a == 4
 *  e and e == 3
 *  o and O == 0
 *  t and T == 7
 *  l and L == 1
 *  @str: parameter of string
 *  Return: pointer of String
 */
char *leet(char *str)
{
	int len = 0;
	char dicLetter[] = "lLtToOeEaA";
	char dicNumeric[] = "1177003344";

	while (str[len] != '\0')
	{
		int count = 0;

		while (dicLetter[count] != 0)
		{
			if (str[len] == dicLetter[count])
			{
				str[len] = dicNumeric[count];
			}
			count += 1;
		}
		len += 1;
	}
	return (str);
}
