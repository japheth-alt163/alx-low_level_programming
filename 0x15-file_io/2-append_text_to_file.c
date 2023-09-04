#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to add to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes, close_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close_status = close(fd);
			if (close_status == -1)
				return (-1);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}
