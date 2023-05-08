#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * @filename: name of the file
 * @letters: bytes to be read
 * Return: return bytes reads or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return(0);
	FILE *fp;
	char str[];

	fp = fopen(filename, "r");
	fread(&str, sizeof(char), letters,fp);
	printf("%s\n", str);
	fclose(filename);
	returtn letters;
}
