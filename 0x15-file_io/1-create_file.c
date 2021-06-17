#include "holberton.h"

/**
 *create_file - create file
 *@filename: name of the file to be created
 *@text_content: NULL terminated string to write to the file
 *Return: 1 on success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, _write;

	len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		_write = write(fd, text_content, len);
	}
	if (_write == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
