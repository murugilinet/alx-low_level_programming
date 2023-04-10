#include "main.h"
/**
 * check97- checks for error in number of arguments
 * @argc: argument count
 * Return: nothing
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check98- error if file_from does not exist,
 * or you cannot read it
 * @test: checks if true /false
 * @file_name1: name of file_from
 * @fd1: file descriptor for file_from
 * @fd2: file descriptor for file_to
 * Return: nothing
 */
void check98(int test, char *file_name1, int fd1, int fd2)
{
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s/n", file_name1);
		if (fd1 == -1)
			close(fd1);
		if (fd2 == -1)
			close(fd2);
		exit(98);
	}
}
/**
 * check99- error if file_to cannot be created or written
 * @test: checks if true or false
 * @file_name2: file name for file_to
 * @fd1: file descriptor for file_from
 * @fd2: file descriptor for file_to
 * Return: nothing
 */
void check99(int test, char *file_name2, int fd1, int fd2)
{
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name2);
		if (fd1 == -1)
			close(fd1);
		if (fd2 == -1)
			close(fd2);
		exit(99);
	}
}
/**
 * check100- error if file descriptor cannot close
 * @test: checks for error in clode
 * @fd: file descriptor for file_to or file_from
 * Return: nothing
 */
void check100(int test, int fd)
{
	if (test == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main- copies the content of a file to another file.
 * @argc: argument count
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rfile, wfile, close1, close2;
	char buffer[1024];


	check97(argc);
	fd1 = open(argv[1], O_RDONLY);
	check98(fd1, argv[1], -1, -1);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check99(fd2, argv[2], -1, -1);
	rfile = 1024;
	while  (rfile == 1024)
	{
		rfile = read(fd1, buffer, 1024);
		check98(rfile, argv[1], fd1, fd2);
		wfile = write(fd2, buffer, rfile);
		if (wfile != rfile)
			wfile = -1;
		check99(wfile, argv[2], fd1, fd2);
	}
	close1 = close(fd1);
	close2 = close(fd2);
	check100(close1, fd1);
	check100(close2, fd2);
	return (0);
}
