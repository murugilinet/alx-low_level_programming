#include "main.h"
/**
 * append_text_to_file- appends text to file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: i on success
 * -1 if failure
 *  1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrfile, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

		wrfile = write(fd, text_content, len);
		if (wrfile == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
