#include "main.h"

/**
 * append_text_to_file - adds a text at the end of file.
 * @filename: A file name pointer
 * @text_content: The string to add to the end of the file.
 * Return:1 when function has errors or filename is NULL,
 * -1 when user is missing/has no write permissions else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, size_lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size_lenght = 0; text_content[size_lenght];)
			size_lenght++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, size_lenght);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
