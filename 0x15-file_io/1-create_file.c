#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * create_file -  create a file and add content
 * @filename: name of the file
 * @text_content: content to be add into the file
 * Return: return 1 on succees or -1 if fails
*/
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int wr = 0;
	int ln = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
	while (*text_content)
	{
		text_content++;
		ln++;
	}
	}
	fp = fopen(filename, "w+");
	if (!fp)
		return (-1);
	wr = fwrite(text_content, sizeof(char), ln, fp);
	if (wr == -1)
		return (-1);
	fclose(fp);
	return (1);
}
