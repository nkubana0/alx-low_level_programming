#include "main.h"
/**
 * rot13 -crypt string in rot13
 * @str: paramter of funtion to crypt
 * Return: the string crypted
 *
 */

char *rot13(char *str)
{
	int len = 0, count;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char crypt[] =  "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[len] != '\0')
	{
		int marq = 0;

		for (count = 0; normal[count] != '\0' && marq == 0; count += 1)
		{
			if (str[len] == normal[count])
			{
				str[len] = crypt[count];
				marq += 1;
			}
		}
		len += 1;
	}
	return (str);
}
