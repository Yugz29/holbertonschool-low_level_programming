#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			write(fd, &text_content[i], 1);
		}
	}

	close(fd);
	return (1);

}
