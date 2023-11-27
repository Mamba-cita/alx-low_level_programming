#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the read text file
 * @letters: total sum of letters to be read
 * Return: b actual number of bytes read and printed
 * 0 filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *d;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	d = malloc(sizeof(char) * letters);
	c = read(a, d, letters);
	b = write(STDOUT_FILENO, d, c);

	free(d);
	close(a);
	return (b);
}
