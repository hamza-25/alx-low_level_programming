#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: bytes to be read
 * Return: return bytes reads or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t wr;
	int bytes;
	char *buffer = NULL;

	if (!filename | !letters)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bytes = read(fp, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, bytes);
	close(fp);
	return (wr);
}
