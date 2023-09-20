#include "main.h"

/**
 * *cap_string - capitalize  after sign
 * seperators are space, tabulation, new line,
 *  , , ; , . , ! , ? ,  , ( , ) , { , and }
 *  @str: parameter of function
 *
 *  Return: return string str
 */

char *cap_string(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[len] == ' ' || str[len] == '\t'
				|| str[len] == '\n' || str[len] == ','
				|| str[len] == ';' || str[len] == '.' || str[len] == '!'
				|| str[len] == '?' || str[len] == '"' || str[len] == '('
				|| str[len] == ')' || str[len] == '{' || str[len] == '}')
		{
			if (str[len + 1] >= 'a' && str[len + 1] <= 'z')
			{
				str[len + 1] -= 32;
			}
		}
		len += 1;
	}
	return (str);
}
