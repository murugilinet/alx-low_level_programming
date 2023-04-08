#include "main.h"
/**
 * read_textfile- function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to file
 * @letters: number of letters to be read and printed
 * Return: actual number of letters it could read
 * and print
 * 0 if file cannot be opened or read
 * filename is NULL
 * write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *filep;
	ssize_t rfile, wfile;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	filep = malloc(sizeof(char) * letters);

	if (filep == NULL)
		return (0);

	rfile = read(fd, filep, letters);
	if (rfile == -1)
	{
		free(filep);
		close(fd);
		return (0);
	}

	wfile = write(STDOUT_FILENO, filep, letters);
		if (wfile == -1)
		{
			free(filep);
			return (0);
		}

	free(filep);
	close(fd);
	return (wfile);
}
