#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Created File name pointer
 * @text_content: A file to writen pointer string
 * Return: If error return  -1 else  - 1
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, size_lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size_lenght = 0; text_content[size_lenght];)
			size_lenght++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, size_lenght);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
