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
	int fp;
	int wr = 0;
	int ln = 0;

	if (!filename)
		return (-1);
	while (*text_content)
	{
		text_content++;
		ln++;
	}
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	wr = write(fp, text_content, ln);
	if (wr == -1)
		return (-1);
	}
	close(fp);
	return (1);
}
