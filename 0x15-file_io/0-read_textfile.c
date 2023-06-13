#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file to be printed to STDOUT.
 * @filename: text file to be read
 * @letters: no of letters to be read
 * Return: w- actual no of bytes read and printed
 *        0 when function fails or filename is zero.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t d;
	ssize_t y;
	ssize_t t;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(d, buf, letters);
	y = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(d);
	return (y);
}
