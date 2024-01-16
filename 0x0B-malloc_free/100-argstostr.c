#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: the argument counter
* @av: the pointer to the arguments
* Return: a pointer to the concatenated string
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, m = 0, n = 0;
	char *ch;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (j < ac)
	{
		while (av[j][m])
		{
			i++;
			m++;
		}
		m = 0;
		j++;
	}

	ch = malloc((sizeof(char) * i) + ac + 1);
	j = 0;
	while (av[j])
	{
		while (av[j][m])
		{
			ch[n] = av[j][m];
			n++;
			m++;
		}
		ch[n] = '\n';
		m = 0;
		n++;
		j++;
	}
	n++;
	ch[n] = '\0';
	return (ch);
}
