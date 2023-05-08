#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

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
	char *buffer;


	fp = fopen(filename, "r");
	buffer = malloc(sizeof(char) * letters);
	if (!buffer | !fp)
		return (0);
	fread(&buffer, sizeof(char), letters, fp);
	wr = fwrite(&buffer, sizeof(char), letters, fp);
	free(buffer);
	fclose(fp);
	return (wr);
}
