#include "main.h"
/**
 * append_text_to_file - Appends text at end of file.
 * @filename: A pointer to name of file.
 * @text_content: The string to add to end of file.
 *
 * Return: If the function fails or filename is zero then - -1.
 *         If the file doesn’t exist user lacks write permissions - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, len);
	if (p == -1 || w == -1)
		return (-1);
	close(p);
	return (1);
}
