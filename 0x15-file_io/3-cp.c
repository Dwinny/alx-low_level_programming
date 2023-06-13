#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bits for a buffer.
 * @file: The name of file buffer is storing chars.
 *
 * Return: A pointer to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - Closes the file descriptors.
 * @fd: file descriptor to be closed.
 */
void close_file(int fd)
{
	int u;

	u = close(fd);
	if (u == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of file to another file.
 * @argc: no of arguments supplied to program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: zero if successful.
 *
 * Description: If argument counted is incorrect - exit code 97.
 * If file_from doesn’t exist or can’t be read - exit code 98.
 * If file_to can’t be created or written to - exit code 99.
 * If file_to or file_from can’t be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, y, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	y = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, y);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		y = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (y > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
