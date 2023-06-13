#include "main.h"
/**
 * create_file - Creates the file.
 * @filename: A pointer to name the file created.
 * @text_content: A pointer to string to be writen to file.
 *
 * Return: If the function fails then - -1.
 *         Else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int d, y, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}
	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(d, text_content, len);
	if (d == -1 || y == -1)
		return (-1);
	close(d);
	return (1);
}
