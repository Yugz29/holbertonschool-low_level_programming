#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the name of the file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0 for fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_b, write_b;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(letters));

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_b = read(fd, buffer, letters);

	if (read_b == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_b = write(STDOUT_FILENO, buffer, read_b);

	if (write_b != read_b)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_b);
}
