#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on succerss, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, _write;

	len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	while (text_content[len])
	{
		len++;
	}
	_write = write(fd, text_content, len);
	if (_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
