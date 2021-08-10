#include "main.h"
/**
 * main - copies the content of a file into another
 * @argc: fisrst argument
 * @argv: 2nd argument
 * Return: cont of file
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, _read, copy_from, copy_to;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file from file to\n");
		exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	file_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(98);
	while ((_read = read(file_from, buffer, 1024)) > 0)
		if (_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(99);
		if (file_from == -1 || write(file_to, buffer, _read) != _read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	copy_to = close(file_from);
	if (copy_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	copy_from = close(file_to);
	if (copy_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	return (0);
}
