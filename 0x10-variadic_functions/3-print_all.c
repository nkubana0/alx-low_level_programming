#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
* @...: the list of parameters
* Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *spt = "";

	va_list characters;

	va_start(characters, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spt, va_arg(characters, int));
					break;
				case 'i':
					printf("%s%d", spt, va_arg(characters, int));
					break;
				case 'f':
					printf("%s%f", spt, va_arg(characters, double));
					break;
				case 's':
					s = va_arg(characters, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", spt, s);
					break;
				default:
					i++;
					continue;
			}
			spt = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(characters);
}
