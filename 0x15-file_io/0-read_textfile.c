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
	FILE *fp;
	ssize_t wr;
	int bytes;
	char *buffer = NULL;

	if (!filename | !letters)
		return (0);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	bytes = fread(buffer, sizeof(char), letters, fp);
	wr = fwrite(buffer, sizeof(char), bytes, fp);
	fclose(fp);
	return (wr);
}
