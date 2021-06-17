#include "holberton.h"
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: pointer to name of file
 * @letters: number of lettes it should read and print
 * Return: 0 if the file canont be opened or read, 0 if filename is NULL
 * or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_txt, write_txt;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);

	if (fd == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	read_txt = read(fd, buffer, letters);
	{
		if (read_txt == -1)
		{
			free(buffer);
			return (0);
		}
	}
	write_txt = write(STDOUT_FILENO, buffer, read_txt);
	{
		if (write_txt == -1)
		{
			free(buffer);
			return (0);
		}
	}
	close(fd);
	return (write_txt);
}
