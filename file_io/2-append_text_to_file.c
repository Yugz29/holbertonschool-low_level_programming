#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - adds text to the end of a file
 * @filename: file name
 * @text_content: string to add
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t writte;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	writte = write(fd, text_content, len);

	if (writte != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);

}
