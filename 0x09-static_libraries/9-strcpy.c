/**
 * _strcpy - string copy function
 *
 * @dest: pointed by
 * @src: pointred to by scr
 * Return: returns 0 success
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}
