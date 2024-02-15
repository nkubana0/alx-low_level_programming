#include "main.h"

/**
 *create_file - creates a file
 *@filename: name of file to create
 *@text_content: a pointer to the contents to add to file
 *Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_depth, w, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_depth = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(file_depth, text_content, length);

	if (file_depth == -1 || w == -1)
		return (-1);

	close(file_depth);

	return (1);
}
