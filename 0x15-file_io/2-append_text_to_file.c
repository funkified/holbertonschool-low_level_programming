#include "holberton.h"
/**
 * append_text_to_file - function that append text at the EOF
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the EOF
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _open, _wr, len;

	len = 0;

	if (filename == NULL)
	{
		return (-1);

	}
	_open = open(filename, O_WRONLY | O_APPEND);

	if (_open == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len])
			len++;
		_wr = write(_open, text_content, len);
		if (_wr == -1)
			return (-1);
	}
	close(_open);
	return (1);
}
