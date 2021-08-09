#include "main.h"
#include <sys/types.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: numer of letter it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_txt, write_txt;
	char *buffer = malloc(sizeof(letters));

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
	if (read_txt == -1)
	{
		free(buffer);
		return (0);
	}
	write_txt = write(STDOUT_FILENO, buffer, read_txt);

	if (write_txt == -1)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	return (write_txt);
}
