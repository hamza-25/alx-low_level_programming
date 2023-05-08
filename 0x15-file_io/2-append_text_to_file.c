#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file -  append content into a file
 * @filename: name of the file
 * @text_content: content to be add into the file
 * Return: return 1 on succees or -1 if fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	char *buffer;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_APPEND);
	if (fp == -1)
		return (-1);	
	buffer = malloc(sizeof(char) * strlen(text_content));
	write(fp, buffer, strlen(text_content));
	free(buffer);
	close(fp);
	return (1);
}
