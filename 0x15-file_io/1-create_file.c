#include <unistd.h>
#include <fcntl.h>
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
	ssize_t wr = 0;
	ssize_t ln;
	
	for (ln = 0; text_content[ln]; ln++)
	{
		text_content++;
	}
	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fp == -1)
		return (-1);
	if (ln)
	{
		wr = write(fp, text_content, ln);
		if (wr != ln)
		{
			close(fp);
			return (-1);
		}
	}
	else
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
