#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#define ERR_READ "Error: Can't read from file %s\n"
/**
 * main -  program to copy file
 * @argc: number of args
 * @argv: array of string
 * Return: return 1 on succees or -1 if fails
 */
int main(int argc, char **argv)
{
	int to = 0;
	int from = 0;
	signed long int bytes;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	}
	to = open(argv[2], O_WRONLY, O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	for (; (bytes = read(from, buffer, 1024)) > 0;)
		if (write(to, buffer, bytes) != bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, argv[1]), exit(98);
	}
	from = close(from);
	to = close(to);
	if (to || from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	return (EXIT_SUCCESS);
}

